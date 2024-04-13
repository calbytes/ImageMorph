#include <iostream>

int main(int argc, char **argv) {
    std::cout << "Usage: morph img.bmp imgout.bmp" << std::endl;
    
    for(int i=0; i<argc; i++){
        std::cout << argv[i] << std::endl;
    }

    return 0;
}
/*
#include <iostream>
#include <gtest/gtest.h>

using namespace std;

int main(int argc, char **argv) {
    std::cout <<"in test.cp" << std::endl;

    ::testing::InitGoogleTest(&argc, argv);

    // Print Google Test version
    std::cout << "Google Testy version: " << ::testing::internal::GTEST_INFO << std::endl;


    for(int i=0; i<argc; i++){
        std::cout << argv[i] << std::endl;
    }

    return 0;
}
*/