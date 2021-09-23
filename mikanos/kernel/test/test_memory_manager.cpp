#include <CppUTest/CommandLineTestRunner.h>
#include "memory_manager.hpp"

TEST_GROUP(MemoryManager) {
  BitmapMemoryManager mgr;

  TEST_SETUP() {}

  TEST_TEARDOWN() {}
};

TEST(MemoryManager, Allocate) {
  const auto frame1 = mgr.Allocate(3);
  const auto frame2 = mgr.Allocate(1);

}












