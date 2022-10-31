#include "application.h"
#include "core.h"
#include "external.h"
#include <iostream>

int main(int agrc, char **argv) {
  std::cout << "Main component linked with:" << std::endl;
  std::cout << GetCoreString() << std::endl;
  std::cout << GetApplicationString() << std::endl;
  std::cout << GetExternalString() << std::endl;
  return 0;
}