#include "imagereader.hpp"

#include <iostream>
#include <iterator>

#include <filesystem>

imagereader::imagereader(const std::string &imgFileName) : _fileName(imgFileName){
    readFile();
}

void imagereader::readFile() {
    std::filesystem::path currentDir = std::filesystem::current_path();
    std::cout << "current directory: " << currentDir << std::endl;

    std::string relativePath("../../img/src/");
    std::ifstream file(relativePath + _fileName);

    if (!file.is_open()) {
        throw std::runtime_error("ERROR opening " + _fileName);
    } else {
        std::cout << "FILE FOUND: you are getting the hang of this!!! >_<" << std::endl;
    }
}

const std::vector<uint8_t> &imagereader::getHeader() {
    return _header;
}

const std::vector<uint8_t> &imagereader::getData() {
    return _data;
}