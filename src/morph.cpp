#include <iostream>
#include <chrono>
#include "imagereader.h"
#include "imagewriter.h"
#include "morpher.h"
#include "morphwrapper.h"

void printUsage(){
    std::cout << "Error: invalid arguments" << std::endl;
    std::cout << "Usage: morph.exe <morphOption> <imageFile>.bmp <outFile>" << std::endl;
}

int main(int argc, char **argv) {
    auto start = std::chrono::high_resolution_clock::now();
    /*
    if(argc != 4){
        printUsage();
        return 1;
    }
    
    std::string morphOption(argv[1]);
    std::string imgFileName(argv[2]);
    std::string outFileName(argv[3]);
    */

    std::string morphOption("rec1");
    std::string imgFileName("img.bmp");
    std::string outFileName("out.bmp");
    
    try {
        imagereader imgReader(imgFileName);
        imagewriter imgWriter(outFileName);

        if(morphOption == "rec1"){
            morphwrapper mw;
            morpher morpher(mw);
            morpher.morphBytes(imgReader, imgWriter);
        } else {
            morphwrapper mw;
            morpher morpher(mw);
            morpher.morphBytes(imgReader, imgWriter);
        }

        

    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
        std::cout << "an error occurered. exiting ImageMorph." << std::endl;
        return 1;
    }

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << "ImageMorph finished; execution time: " << duration.count() << std::endl;
    return 0;
}