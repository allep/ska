#pragma once

#include <filesystem>
#include <functional>

/**
 * @brief Interface to a service used to traverse a filesystem subtree
 * recursively and perform actions on each element.
 */
class FileSystemTraversalService {
public:
  /**
   * @brief Recursively traverse a given path performing on each element the
   * action specified by "action".
   *
   * @param path The path to be recursively traversed.
   * @param action The action to be done on each element.
   */
  virtual void RecursivelyVisitDirectory(
      const std::filesystem::path &path,
      std::function<void()> action = []() {}) = 0;
};