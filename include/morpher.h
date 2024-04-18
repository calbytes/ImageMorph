#pragma once
#include <vector>
#include <string>
#include "imagereader.h"
#include "imagewriter.h"
#include "morphwrapper.h"

class morpher {
private:
    morphwrapper &_mw;

public:
    morpher(morphwrapper &mw) : _mw{mw} {}
    virtual ~morpher() = default;
    virtual void morphBytes(imagereader &in, imagewriter &out);
};