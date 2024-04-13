#pragma once
#include <fstream>
#include <vector>
#include <cstdint>

class imagereader {
private:
    std::string _filename;
    std::vector<uint8_t> _header;
    std::vector<uint8_t> _data;

public:
    imagereader() {};  
    virtual ~imagereader() = default;
    virtual void open(const std::string &imgFile);
    virtual const std::vector<uint8_t> &getHeader();
    virtual const std::vector<uint8_t> &getData();    
};