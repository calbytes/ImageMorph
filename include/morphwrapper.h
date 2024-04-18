#pragma once
#include <vector>
#include <cstdint>

class morphwrapper {
public:
    morphwrapper() {};
    virtual ~morphwrapper() = default;
    virtual std::vector<uint8_t> morph(const std::vector<uint8_t> &bytes);
};