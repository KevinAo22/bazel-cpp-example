#include <macos/platform_macos.h>

#include <iostream>
#include <memory>

int main(int argc, char* argv[]) {
   auto platform = std::make_unique<PlatformMacos>();
   platform->PrintHelloWorld();
   return 0;
}
