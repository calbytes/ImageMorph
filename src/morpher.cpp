#include <memory>
#include <stdexcept>
#include <iostream>
#include "morpher.hpp"

void morpher::morphBytes(imagereader &in, imagewriter &out) {
    
    std::cout << "header, in morpher: " << &in.getHeader() << std::endl;
    std::cout << "data, in morpher  : " << &in.getData() << std::endl;

    out.write(in.getHeader());
    out.write(_mw.morph(in.getData()));
}
