#pragma once

#include <filesystem>
#include <map>
#include <string>
#include <optional>

namespace AudioSync {

struct BaseAudioInfo {
	std::string author;
	std::string track_name;
	std::string album;
};

struct InfoCSV_field {
    std::filesystem::path file_name;
    std::optional<BaseAudioInfo> audio_info;

public:
    bool isDir();
};

using DiffType = std::map<size_t, std::pair<InfoCSV_field*, InfoCSV_field*>>;

class InfoCSV_file: public std::vector<InfoCSV_field> {
public:
    static InfoCSV_file getOurInfoFile();

public:
    DiffType gitDiff(const InfoCSV_file& other) const;
};

}

