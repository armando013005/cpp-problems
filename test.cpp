// out_of_range example
#include <iostream>       // std::cerr
#include <stdexcept>      // std::out_of_range
#include <vector>         // std::vector

int main (void) {
  std::vector<int> myvector;
  myvector.push_back(3);
  try {
    myvector.at(1);      // vector::at throws an out-of-range
  }
  catch (const std::out_of_range& oor) {
    //myvector.push_back(100);
    //myvector.resize(1);
    std::cout<<"error";
  }
  std::cout<<"gud";
  return 0;
}