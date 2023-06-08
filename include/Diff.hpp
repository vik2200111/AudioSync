#pragma once

#include <cstdint>
#include <set>

namespace AudioSync {

class InfoCSV_field;

namespace Diff {
    enum class Mode: std::uint8_t {
        Add
        , Delete
        , Modify
    };

    class Type: public std::set<std::pair<Type, InfoCSV_field*>> {

    };
}

}

