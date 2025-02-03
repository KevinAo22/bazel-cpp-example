#include <linux/platform_linux.h>

#include <iostream>
#include <memory>

int main(int argc, char* argv[]) {
   auto platform = std::make_unique<PlatformLinux>();
   platform->PrintHelloWorld();
   return 0;
}
