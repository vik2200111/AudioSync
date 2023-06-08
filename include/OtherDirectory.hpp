#pragma once

#include <memory>
#include <string>
#include <vector>

#include "AudioLibraryInfo.hpp"

namespace AudioSync {

class OtherDirectory {
public:
    static std::vector<std::unique_ptr<OtherDirectory>> getOtherDirectories();

public:
    AudioLibraryInfo getInfo() const;

public:
    const std::string name;

private:
    OtherDirectory() = default;
};

}

