#include "InfoCSV.hpp"

namespace AudioSync {

bool InfoCSV_field::isDir() {
    return not audio_info.has_value();
}

InfoCSV_file InfoCSV_file::getOurInfoFile() {
    return {}; // TODO: not correct return value
}

Diff::Type InfoCSV_file::gitDiff(const InfoCSV_file& /*other*/) const {
    return {}; // TODO: not correct return value
}

}

