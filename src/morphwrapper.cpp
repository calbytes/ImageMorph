#include <iostream>
#include "morphwrapper.hpp"

std::vector<uint8_t> morphwrapper::morph(const std::vector<uint8_t> &bytes){
    std::cout << "bytes size : " << bytes.size() << std::endl;

    std::vector<uint8_t> outBytes;
    
    std::uint8_t map[256] = {0};

    for(std::vector<uint8_t>::size_type i = 0; i != bytes.size(); i++) {
        outBytes.push_back(bytes[i]);

        map[bytes[i]]++;
    }

    for(std::uint8_t i=0; i<256; i++){
        std::cout << "map[" << static_cast<int>(i) << "] = " << static_cast<int>(map[i]) << std::endl;
    }
    
    auto min = std::min_element(bytes.begin(), bytes.end());
    auto max = std::max_element(bytes.begin(), bytes.end());

    std::cout << "outBytes size : " << outBytes.size() << std::endl;
    std::cout << "Minimum value: " << static_cast<int>(*min) << std::endl;
    std::cout << "Maximum value: " << static_cast<int>(*max) << std::endl;


    return outBytes;
}