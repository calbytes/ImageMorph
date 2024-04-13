#include <iostream>
#include "imagereader.hpp"
#include "imagewriter.hpp"

void printUsage(){
    std::cout << "Error: invalid arguments" << std::endl;
    std::cout << "Usage: morph <img.bmp> outFileName" << std::endl;
}

int main(int argc, char **argv) {

    if(argc != 4){
        printUsage();
        return 1;
    }
    
    std::string morphOption(argv[1]);
    std::string imgFile(argv[2]);
    std::string imgOutFile(argv[3]);
    
    std::cout << morphOption + ", " + imgFile + " " + imgOutFile << std::endl;

    try {
        imagereader imgReader;
        imagewriter imgWriter;

        imgReader.open(imgFile);
        imgWriter.open(imgOutFile);
        imgWriter.write();
        
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
        std::cout << "Exiting ImageMorph" << std::endl;
        return 1;
    }

    return 0;
}