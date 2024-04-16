#pragma once
#include <fstream>
#include <vector>
#include <cstdint>

class imagereader {
private:
    constexpr static size_t BMP_HEADER_SIZE{0x4}; //sub w const size_t 
    std::string _fileName;
    std::vector<uint8_t> _header;
    std::vector<uint8_t> _data;
    virtual void readFile();

public:
    imagereader(const std::string &imgFileName);  
    virtual ~imagereader() = default;
    virtual const std::vector<uint8_t> &getHeader();
    virtual const std::vector<uint8_t> &getData();    
};