#include "imagewriter.hpp"

imagewriter::imagewriter(const std::string &outFile) {
    _file.open(outFile, std::ios::binary);
}

void imagewriter::write(const std::vector<uint8_t> &bytes){
    _file.flush();
}