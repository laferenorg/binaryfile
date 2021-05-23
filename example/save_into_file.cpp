#include <iostream>
#include <string>
#include "../include/binaryfile.hpp"

int main(int argc, const char* argv[]) {
  std::binaryfile db = "data.db";
  
  db.adding_number<int>(10);        // id = 1
  db.adding_number<float>(20.3f);   // id = 2
  
  db.save(); // this will be save the data into file
  {
    (void)argc;
    (void)argv;
  }
  return 0;
}
