#include "imagewriter.hpp"

void imagewriter::open(const std::string &outFile) {
    _file.open(outFile, std::ios::binary);
}

void imagewriter::write(){
    _file.flush();
}