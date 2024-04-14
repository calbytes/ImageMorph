#pragma once
#include <fstream>
#include <vector>
#include <cstdint>

class imagereader {
private:
    std::string _fileName;
    std::vector<uint8_t> _header;
    std::vector<uint8_t> _data;

public:
    imagereader(const std::string &imgFileName);  
    virtual ~imagereader() = default;
    virtual void readFile();
    virtual const std::vector<uint8_t> &getHeader();
    virtual const std::vector<uint8_t> &getData();    
};