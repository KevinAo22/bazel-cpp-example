#include <windows/platform_windows.h>

#include <iostream>
#include <memory>

int main(int argc, char* argv[]) {
   auto platform = std::make_unique<PlatformWindows>();
   platform->PrintHelloWorld();
   return 0;
}
