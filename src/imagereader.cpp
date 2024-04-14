#include <iostream>
#include <iterator>
#include "imagereader.hpp"

imagereader::imagereader(const std::string &imgFileName) : _fileName(imgFileName){
    readFile();
}

void imagereader::readFile() {
    std::string pathToFile("../img/src/" + _fileName);
    std::ifstream file(pathToFile, std::ios::binary);
    if (!file.is_open()) {
        throw std::runtime_error("ERROR: unable to open file: " + _fileName);
    }  

    file >> std::noskipws;
    std::istream_iterator<uint8_t> begin(file), end;
    std::vector<uint8_t> buffer(begin, end);

    if (buffer.size() < BMP_HEADER_SIZE) {
        throw std::runtime_error("file is not large enough to have a header");
    }

    auto middle = buffer.begin() + BMP_HEADER_SIZE;
    _header.insert(_header.begin(), buffer.begin(), middle);
    _data.insert(_data.begin(), middle, buffer.end());
}

const std::vector<uint8_t> &imagereader::getHeader() {
    return _header;
}

const std::vector<uint8_t> &imagereader::getData() {
    return _data;
}