// platform_windows.cpp

#include <iostream>

#include "platform.h"

void PlatformWindows::PrintHelloWorld() {
   std::wcout << L"Hello world from Windows." << std::endl;
}
