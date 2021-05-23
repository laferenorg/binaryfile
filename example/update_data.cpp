#include <iostream>
#include <string>
#include "../include/binaryfile.hpp"

int main(int argc, const char* argv[]) {
  std::binaryfile db = "data.db";
  
  db.adding_number<int>(10);                   // id = 1
  db.adding_number<double>(10.234);            // id = 2
  db.update_string(1, "Hello, World!");        // This will be change data id number 1 to string
  db.update_number<float>(2, 34.4f);           // This will be change data id number 2 to float
  
  std::cout << db.get_string(1) << std::endl;  // output = Hello, World!
  std::cout << db.get_string(2) << std::endl;  // output = 34.4
  {
    (void)argc;
    (void)argv;
  }
  return 0;
}
