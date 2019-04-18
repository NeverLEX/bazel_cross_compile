#include <fstream>
#include <iostream>
#include "math.h"

void PrintFile(const char* filename) {
  std::string line;
  std::ifstream ifs(filename);
  while (std::getline(ifs, line)) {
    std::cout << line << std::endl;
  }
  ifs.close();
}

int main(int argc, char* argv[]) {
  std::cout << "hello world." << std::endl;
  std::cout << math_lib::max(1, 2) << std::endl;
  return 0;
}
