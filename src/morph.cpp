#include <iostream>
#include "imagereader.hpp"
#include "imagewriter.hpp"

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
    
    std::cout << morphOption + ", " + imgFileName + " " + outFileName << std::endl;

    try {
        imagereader imgReader(imgFileName);
        imagewriter imgWriter(outFileName);
        
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
        std::cout << "an error occurered. exiting ImageMorph." << std::endl;
        return 1;
    }

    return 0;
}