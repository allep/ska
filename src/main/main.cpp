#include "application.h"
#include <iostream>

int main(int agrc, char **argv) {
  std::cout << "Main component linked with:" << std::endl;
  std::cout << GetApplicationString() << std::endl;
  return 0;
}