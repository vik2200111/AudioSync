#pragma once

#include <memory>
#include <string>
#include <vector>

#include "InfoCSV.hpp"

namespace AudioSync {

class StreamingAPI {
public:
    virtual InfoCSV_file getInfo() const = 0;

    virtual ~StreamingAPI() = default;

public:
    static std::vector<std::unique_ptr<StreamingAPI>> getStreamingServices();

public:
    const std::string name;

private:
    StreamingAPI() = default;
};

}

