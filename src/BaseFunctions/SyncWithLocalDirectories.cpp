#include "BaseFunctions.hpp"
#include "OtherDirectory.hpp"
#include "Tools.hpp"

namespace AudioSync {

void syncWithLocalDirectories(InfoCSV_file& ourInfoFile) {
    baseSyncWith<
        OtherDirectory
        , &OtherDirectory::getOtherDirectories
        , &OtherDirectory::getInfo
        , &OtherDirectory::name
    >(ourInfoFile);
}

}

