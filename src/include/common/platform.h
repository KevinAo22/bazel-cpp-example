// platform.h

#pragma once

class Platform {
public:
   Platform() = default;
   virtual ~Platform() = default;
   virtual void PrintHelloWorld() = 0;
};
