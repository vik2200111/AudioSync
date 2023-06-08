#include <vector>

#include "BaseFunctions.hpp"
#include "AudioLibraryInfo.hpp"

int main() {
    auto ourInfo = AudioSync::AudioLibraryInfo::getOurAudioLibraryInfo();
    AudioSync::syncWithStreamingServices(ourInfo);
    AudioSync::syncWithLocalDirectories(ourInfo);

	return 0;
}

