#pragma once

#include <memory>
#include <vector>

#include "InfoCSV.hpp"

namespace AudioSync {

class StreamingAPI {
public:
    virtual InfoCSV_file getInfo() = 0;

    virtual ~StreamingAPI() = default;

public:
    static std::vector<std::unique_ptr<StreamingAPI>> getStreamingServices();

private:
    StreamingAPI() = default;
};

}

