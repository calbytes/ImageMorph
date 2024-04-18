#pragma once
#include <fstream>
#include <vector>
#include <cstdint>

class imagereader {
private:
    const size_t BMP_HEADER_SIZE{0x0}; //0x36 : 54, 0x4 : 4, 0x1024 : 4132
    std::string _fileName;
    std::vector<uint8_t> _header;
    std::vector<uint8_t> _data;

public:
    imagereader(const std::string &imgFileName);  
    virtual ~imagereader() = default;
    virtual const std::vector<uint8_t> &getHeader();
    virtual const std::vector<uint8_t> &getData();    
};