#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "FileSystemTraversalServiceMock.h"

TEST(FileSystemTraversalService, BasicTraversal) {
  // clang-format off
  EXPECT_EQ(42, 43);
  // clang-format on

  // Test to do:
  // create the service mock
  // set actions for its call as if we were traversing a fs for real

  // TODO FIXME: this probably doesn't work, because I need to specify more than
  // a single call for a single function call. Is it possible? Is there a better
  // way to do so? Probably (red hat) I'm doing a bad design of the service
  // interface :(
}