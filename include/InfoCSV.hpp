#pragma once

#include <filesystem>
#include <map>
#include <string>
#include <optional>

#include "Diff.hpp"

namespace AudioSync {

class BaseAudioInfo {
public:
	std::string author;
	std::string track_name;
	std::string album;
};

class InfoCSV_field {
public:
    std::filesystem::path file_name;
    std::optional<BaseAudioInfo> audio_info;

public:
    bool isDir();
};

class InfoCSV_file: public std::vector<InfoCSV_field> {
public:
    static InfoCSV_file getOurInfoFile();

public:
    Diff::Type gitDiff(const InfoCSV_file& other) const;
};

}

