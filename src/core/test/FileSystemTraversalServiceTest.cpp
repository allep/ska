#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <iostream>

#include "FileSystemTraversalServiceMock.h"

using ::testing::DoAll;

/**
 * @brief simple naive test to experiment with gmock and a simple interface.
 *        Checks if the callback is called as expected.
 */
TEST(FileSystemTraversalService, BasicMockTest) {
  FileSystemTraversalServiceMock service;

  int counter = 0;
  auto action = [&counter]() {
    // clang-format off
    counter++; 
    // clang-format on 
    };

  EXPECT_CALL(service, RecursivelyVisitDirectory)
      .WillOnce(DoAll(testing::InvokeWithoutArgs([&action]() { action(); })));

  service.RecursivelyVisitDirectory("test", action);
  EXPECT_EQ(counter, 1);
}