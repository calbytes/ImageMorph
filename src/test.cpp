#include <iostream>
#include <gtest/gtest.h>

using namespace std;

int main(int argc, char **argv) {
  if (argc != 7) {
    std::cout <<"Not 7" << std::endl;
    return 1;
  }
  else{
    std::cout <<"Hello World!" << std::endl;
  }
}