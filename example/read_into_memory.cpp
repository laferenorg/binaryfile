#include <iostream>
#include <string>
#include "../include/binaryfile.hpp"

int main(int argc, const char* argv[]) {
  std::binaryfile db = "data.db";
  db.init(); // read file into memory
  
  std::cout << myFile.length() << std::endl; // if the file empty this give 0 length
  {
    (void)argc;
    (void)argv;
  }
  return 0;
}
