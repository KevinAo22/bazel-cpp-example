/*
 * platform_test_windows.cpp
 *
 *    Test cases for platform on Windows.
 *
 */

#include <gtest/gtest.h>
#include <windows/platform_windows.h>

#include <memory>

class PlatformWindowsTest : public ::testing::Test {
protected:
   void SetUp() override { platform = std::make_unique<PlatformWindows>(); }

   void TearDown() override {}

   std::unique_ptr<PlatformWindows> platform;
};

TEST_F(PlatformWindowsTest, PrintHelloWorld) {
   testing::internal::CaptureStdout();
   platform->PrintHelloWorld();
   auto output = testing::internal::GetCapturedStdout();
   EXPECT_EQ(output, "Hello world from Windows.\n");
}
