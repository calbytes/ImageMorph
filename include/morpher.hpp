#pragma once
#include <vector>
#include <string>
#include "imagereader.hpp"
#include "imagewriter.hpp"
#include "morphwrapper.hpp"

class morpher {
private:
    morphwrapper &_mw;

public:
    morpher(morphwrapper &mw) : _mw{mw} {}
    virtual ~morpher() = default;
    virtual void morphBytes(imagereader &in, imagewriter &out);
};