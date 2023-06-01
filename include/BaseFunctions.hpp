#pragma once

class InfoCSV_file;

namespace AudioSync {

void syncWithStreamingServices(InfoCSV_file& ourInfoFile);

void syncWithLocalDirectories(InfoCSV_file& ourInfoFile);

}

