cmake_minimum_required(VERSION 3.11-3.18)
project(ska)

add_executable(ska src/main.cpp)

target_include_directories(${PROJECT_NAME}
	PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(ska
	PRIVATE core PRIVATE application PRIVATE external)

target_compile_features(ska PUBLIC cxx_std_20)

enable_testing()

add_executable(main_test test/main_test.cpp)
target_link_libraries(main_test PRIVATE core PRIVATE application PRIVATE external GTest::gtest_main)

# Simple naive test: it runs main and checks return code.
add_test(NAME ska COMMAND ska)

# Google tests
include(GoogleTest)
gtest_discover_tests(main_test)
