#pragma once

#include <memory>
#include <string>
#include <vector>

#include "AudioLibraryInfo.hpp"

namespace AudioSync {

class StreamingAPI {
public:
    virtual AudioLibraryInfo getInfo() const = 0;

    virtual ~StreamingAPI() = default;

public:
    static std::vector<std::unique_ptr<StreamingAPI>> getStreamingServices();

public:
    const std::string name;

private:
    StreamingAPI() = default;
};

}

