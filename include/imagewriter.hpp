#pragma once

#include <fstream>
#include <vector>
#include <cstdint>

class imagewriter {
private:
    std::ofstream _file;

public:
    imagewriter() {};
    virtual ~imagewriter() = default;
    virtual void open(const std::string &outFile);
    virtual void write();
};