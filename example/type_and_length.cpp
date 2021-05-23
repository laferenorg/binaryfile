#include <iostream>
#include <string>
#include "../include/binaryfile.hpp"

int main(int argc, const char* argv[]) {
  std::binaryfile db = "data.db";
  
  db.adding_number<int>(10);        // id = 1
  db.adding_number<float>(20.3f);   // id = 2
  db.adding_number<double>(34.234); // id = 3
  db.adding_string("Hello, World!") // id = 4
  
  std::cout << db.type(1) << std::endl;    // output = int
  std::cout << db.length() << std::endl;   // output = 4
  {
    (void)argc;
    (void)argv;
  }
  return 0;
}
