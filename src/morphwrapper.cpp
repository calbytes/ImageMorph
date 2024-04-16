#include <iostream>
#include "morphwrapper.hpp"

std::vector<uint8_t> morphwrapper::morph(const std::vector<uint8_t> &bytes){
    std::vector<uint8_t> outBytes;
    
    std::uint16_t map[256] = {0};

    std::uint16_t min = 256;
    std::uint16_t max = -256;
    std::uint16_t numOfBytes = 0;

    for(std::vector<uint8_t>::size_type i = 0; i != bytes.size(); i++) {
        outBytes.push_back(bytes[i]);

        map[bytes[i]]++;
        if(bytes[i] < min) min = bytes[i];
        if(bytes[i] > max) max = bytes[i];
        numOfBytes++;
    }


    std::uint16_t sum = 0;
    for(std::uint16_t i=0; i<256; i++){
        std::cout << "map[" << static_cast<int>(i) << "] = " << static_cast<int>(map[i]) << std::endl;
        sum += map[i];
    }

    std::cout << "bytes size : " << bytes.size() << std::endl;

    std::cout << "Num of bytes in outBytes : " << numOfBytes << std::endl;
    std::cout << "sum : " << sum << std::endl;

    std::cout << "outBytes size : " << outBytes.size() << std::endl;
    std::cout << "Minimum value: " << min << std::endl;
    std::cout << "Maximum value: " << max << std::endl;


    return outBytes;
}