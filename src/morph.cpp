#include <iostream>
#include "imagereader.hpp"
#include "imagewriter.hpp"
#include "morpher.hpp"
#include "morphwrapper.hpp"

void printUsage(){
    std::cout << "Error: invalid arguments" << std::endl;
    std::cout << "Usage: morph.exe <morphOption> <imageFile>.bmp <outFile>" << std::endl;
}

int main(int argc, char **argv) {

    if(argc != 4){
        printUsage();
        return 1;
    }
    
    std::string morphOption(argv[1]);
    std::string imgFileName(argv[2]);
    std::string outFileName(argv[3]);
    
    try {
        imagereader imgReader(imgFileName);
        imagewriter imgWriter(outFileName);

        std::cout << "Address of _header: " << &imgReader.getHeader() << std::endl;
        std::cout << "address of _data  : " << &imgReader.getData() << std::endl;

        morphwrapper mw;
        morpher morpher(mw);

    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
        std::cout << "an error occurered. exiting ImageMorph." << std::endl;
        return 1;
    }

    return 0;
}