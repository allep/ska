cmake_minimum_required(VERSION 3.11-3.18)

project(core)

add_library(core src/core.cpp)

target_include_directories(${PROJECT_NAME}
	PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_compile_features(core PUBLIC cxx_std_20)

enable_testing()

add_executable(fs_test test/FileSystemTraversalServiceTest.cpp)
target_link_libraries(fs_test PRIVATE core GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(fs_test)
