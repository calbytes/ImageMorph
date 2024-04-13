#include "imagereader.hpp"

#include <iostream>
#include <iterator>

void imagereader::open(const std::string &imgFile){
    _filename = imgFile;
    std::cout << "imgFile : " + imgFile << std::endl;
}

const std::vector<uint8_t> &imagereader::getHeader() {
    return _header;
}

const std::vector<uint8_t> &imagereader::getData() {
    return _data;
}