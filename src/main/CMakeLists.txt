cmake_minimum_required(VERSION 3.11-3.18)
project(main)
add_executable(main main.cpp)
target_compile_features(main PUBLIC cxx_std_20)

enable_testing()

# Simple naive test: it runs main and checks return code.
add_test(NAME main COMMAND main)
