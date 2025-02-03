/*
 * platform_test_linux.cpp
 *
 *    Test cases for platform on Linux.
 *
 */

#include <gtest/gtest.h>
#include <linux/platform_linux.h>

#include <memory>

class PlatformLinuxTest : public ::testing::Test {
protected:
   void SetUp() override { platform = std::make_unique<PlatformLinux>(); }

   void TearDown() override {}

   std::unique_ptr<PlatformLinux> platform;
};

TEST_F(PlatformLinuxTest, PrintHelloWorld) {
   testing::internal::CaptureStdout();
   platform->PrintHelloWorld();
   auto output = testing::internal::GetCapturedStdout();
   EXPECT_EQ(output, "Hello world from Linux.\n");
}
