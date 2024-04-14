#include "imagewriter.hpp"

imagewriter::imagewriter(const std::string &outFile) {
    _file.open(outFile, std::ios::binary);
}

void imagewriter::write(const std::vector<uint8_t> &bytes){
    if (!_file.is_open()) {
        throw std::runtime_error("No File Opened.");
    }

    _file.write(reinterpret_cast<const char *>(bytes.data()), bytes.size());
    _file.flush();
}