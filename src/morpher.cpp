#include <memory>
#include <stdexcept>
#include <iostream>
#include "morpher.h"

void morpher::morphBytes(imagereader &in, imagewriter &out) {
    out.write(in.getHeader());
    out.write(_mw.morph(in.getData()));
}
