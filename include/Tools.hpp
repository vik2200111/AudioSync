#pragma once

#include <memory>
#include <vector>

#include "InfoCSV.hpp"
#include "UI.hpp"

namespace AudioSync {

template<
    class Source
    , std::vector<std::unique_ptr<Source>> (getSources)()
    , InfoCSV_file (Source::* getInfo)()
>
void baseSyncWith(InfoCSV_file& ourInfoFile) {
    for (auto& source: getSources()) {
        const auto sourceInfoFile = ((source.get())->*getInfo)();
        const auto differebce = ourInfoFile.gitDiff(sourceInfoFile);

        std::unique_ptr<UI_Base> ui = UI_Base::getUI();
        if (differebce.empty()) {
            // TODO: Not implemented
        }
    }
}

}

