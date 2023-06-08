#include "AudioLibraryInfo.hpp"

namespace AudioSync {

bool InfoCSV_field::isDir() {
    return not audio_info.has_value();
}

AudioLibraryInfo AudioLibraryInfo::getOurAudioLibraryInfo() {
    return {}; // TODO: not correct return value
}

Diff::Type AudioLibraryInfo::gitDiff(const AudioLibraryInfo& /*other*/) const {
    return {}; // TODO: not correct return value
}

}

