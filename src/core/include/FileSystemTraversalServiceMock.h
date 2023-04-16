#pragma once

#include "gmock/gmock.h"

#include "FileSystemTraversalService.h"

class FileSystemTraversalServiceMock : public FileSystemTraversalService {
public:
  MOCK_METHOD(void, RecursivelyVisitDirectory,
              (const std::filesystem::path &path, std::function<void()> action),
              (override));
};
