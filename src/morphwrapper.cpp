#include <iostream>
#include "morphwrapper.h"

std::vector<uint8_t> morphwrapper::morph(const std::vector<uint8_t> &bytes){
    std::vector<uint8_t> outBytes;
    
    std::uint32_t map[256] = {0};

    for(int i=0; i<bytes.size(); i++){
        uint8_t byteValue = bytes[i];
        outBytes.push_back(byteValue);

        map[byteValue]++;
    }
    std:uint32_t sum = 0;
    for(int i = 0; i<=255; i++){
        std::cout << "map[" << i << "]: " << static_cast<unsigned int>(map[i]) << std::endl;
        sum += map[i];
    }

    std::cout << "sum : " << sum << std::endl;
    return outBytes;
}