/*
 * platform_test_macos.cpp
 *
 *    Test cases for platform on macOS.
 *
 */

#include <gtest/gtest.h>

#include <memory>

#include "src/libs/platform/platform.h"

class PlatformMacosTest : public ::testing::Test {
protected:
   void SetUp() override { platform = std::make_unique<PlatformMacos>(); }

   void TearDown() override {}

   std::unique_ptr<PlatformMacos> platform;
};

TEST_F(PlatformMacosTest, PrintHelloWorld) {
   testing::internal::CaptureStdout();
   platform->PrintHelloWorld();
   auto output = testing::internal::GetCapturedStdout();
   EXPECT_EQ(output, "Hello world from macOS.\n");
}
