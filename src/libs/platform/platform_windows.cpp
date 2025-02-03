// platform_windows.cpp

#include <windows/platform_windows.h>

#include <iostream>

void PlatformWindows::PrintHelloWorld() {
   std::wcout << L"Hello world from Windows." << std::endl;
}
