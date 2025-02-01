#include <iostream>
#include <memory>

#include "src/libs/platform/platform.h"

int main(int argc, char* argv[]) {
   auto platform = std::make_unique<PlatformLinux>();
   platform->PrintHelloWorld();
   return 0;
}
