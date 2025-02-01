#include <iostream>
#include <memory>

#include "src/libs/platform/platform.h"

int main(int argc, char* argv[]) {
   auto platform = std::make_unique<PlatformMacos>();
   platform->PrintHelloWorld();
   return 0;
}
