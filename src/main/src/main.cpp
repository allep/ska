#include <iostream>

#include "application.h"
#include "core.h"
#include "external.h"
#include "main.h"

const std::string GetMainString() { return "SKA Main"; }

int main(int agrc, char **argv) {
  std::cout << GetMainString() << std::endl;
  std::cout << GetCoreString() << std::endl;
  std::cout << GetApplicationString() << std::endl;
  std::cout << GetExternalString() << std::endl;
  return 0;
}