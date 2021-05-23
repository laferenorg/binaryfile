#include <iostream>
#include <string>
#include "../include/binaryfile.hpp"

int main(int argc, const char* argv[]) {
  std::binaryfile db = "data.db";
  
  db.adding_number<int>(10);        // id = 1
  db.adding_number<float>(20.3f);   // id = 2
  db.adding_number<double>(34.234); // id = 3
  db.adding_string("Hello, World!") // id = 4
  
  std::cout << db.get_number<int>(1) << std::endl;    // output = 10
  std::cout << db.get_number<float>(2) << std::endl;  // output = 20.3
  std::cout << db.get_number<double>(3) << std::endl; // output = 34.234
  std::cout << db.get_string(4) << std::endl;         // output = Hello, World!
  {
    (void)argc;
    (void)argv;
  }
  return 0;
}
