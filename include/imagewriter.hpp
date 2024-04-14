#pragma once

#include <fstream>
#include <vector>
#include <string>
#include <cstdint>

class imagewriter {
private:
    std::ofstream _file;

public:
    imagewriter(const std::string &outFileName);
    virtual ~imagewriter() = default;
    virtual void write(const std::vector<uint8_t> &bytes);
};