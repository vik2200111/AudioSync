#include "BaseFunctions.hpp"
#include "StreamingAPI.hpp"
#include "Tools.hpp"

namespace AudioSync {

void syncWithStreamingService(InfoCSV_file& ourInfoFile) {
    baseSyncWith<
        StreamingAPI
        , &StreamingAPI::getStreamingServices
        , &StreamingAPI::getInfo
        , &StreamingAPI::name
    >(ourInfoFile);
}

}

