#include <vector>

#include "BaseFunctions.hpp"
#include "InfoCSV.hpp"

int main() {
    auto ourInfoFile = InfoCSV_file::getOurInfoFile();
    AudioSync::syncWithStreamingServices(ourInfoFile);
    AudioSync::syncWithLocalDirectories(ourInfoFile);

	return 0;
}

