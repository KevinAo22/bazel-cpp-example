// platform.h

#pragma once

#ifndef PLATFORM_H
#define PLATFORM_H

class Platform {
 public:
  Platform() = default;
  virtual ~Platform() = default;
  virtual void PrintHelloWorld() = 0;
};

#ifdef __linux__
class PlatformLinux : public Platform {
 public:
  void PrintHelloWorld() override;
};

#elif __APPLE__
class PlatformMacos : public Platform {
 public:
  void PrintHelloWorld() override;
};

#elif _WIN32
class PlatformWindows : public Platform {
 public:
  void PrintHelloWorld() override;
};

#endif

#endif  // PLATFORM_H
