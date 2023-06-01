#pragma once

#include <memory>
#include <vector>

#include "InfoCSV.hpp"

namespace AudioSync {

class OtherDirectory {
public:
    static std::vector<std::unique_ptr<OtherDirectory>> getOtherDirectories();

public:
    InfoCSV_file getInfo();

private:
    OtherDirectory() = default;
};

}

