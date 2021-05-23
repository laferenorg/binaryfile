#include <iostream>
#include <string>
#include "../include/binaryfile.hpp"

int main(int argc, const char* argv[]) {
  std::binaryfile db = "data.db";
  
  db.adding_number<int>(10);         // id = 1
  db.adding_number<float>(20.3f);    // id = 2
  db.adding_number<double>(34.234);  // id = 3
  db.adding_string("Hello, World!"); // id = 4
    
  db.remove(2);
  
  std::cout << db.get_number<int>(1) << std::endl;     // output = 10
  std::cout << db.get_number<double>(2) << std::endl;  // output = 34.234
  std::cout << db.get_string(3) << std::endl;          // output = Hello, World!
  
  db.clear(); // this will delete all data
  {
    (void)argc;
    (void)argv;
  }
  return 0;
}
