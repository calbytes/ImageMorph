#include <iostream>
#include <iterator>
#include "imagereader.h"

imagereader::imagereader(const std::string &imgFileName) : _fileName(imgFileName){
    std::string pathToFile("../img/" + _fileName);
    std::ifstream file(pathToFile, std::ios::binary);
    if (!file.is_open()) {
        throw std::runtime_error("ERROR: unable to open file: " + _fileName);
    }  

    file >> std::noskipws;
    std::istream_iterator<uint8_t> begin(file), end;
    std::vector<uint8_t> buffer(begin, end);

    if (buffer.size() < BMP_HEADER_SIZE) {
        throw std::runtime_error("File size Error.");
    }

    auto middle = buffer.begin() + BMP_HEADER_SIZE;
    _header.insert(_header.begin(), buffer.begin(), middle);
    _data.insert(_data.begin(), middle, buffer.end());
    /*
    std::cout << "Address of buffer begin: " << static_cast<void*>(&buffer[0]) << std::endl;
    std::cout << "Address of buffer end: " << static_cast<void*>(&buffer[buffer.size() - 1]) << std::endl;
    std::cout << "Address of middle: " << static_cast<void*>(&(*middle)) << std::endl;
    */
}

const std::vector<uint8_t> &imagereader::getHeader() {
    return _header;
}

const std::vector<uint8_t> &imagereader::getData() {
    return _data;
}