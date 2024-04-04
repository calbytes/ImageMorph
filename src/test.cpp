#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    std::cout <<"in test.cp" << std::endl;

    for(int i=0; i<argc; i++){
        std::cout << argv[i] << std::endl;
    }

    if (argc != 7) {
        std::cout <<"Not 7" << std::endl;
        return 1;
    }
    else{
        std::cout <<"Hello World!" << std::endl;
    }

    return 0;
}