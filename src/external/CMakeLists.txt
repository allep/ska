cmake_minimum_required(VERSION 3.11-3.18)

project(external)

add_library(external src/external.cpp)

target_include_directories(${PROJECT_NAME}
	PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_compile_features(external PUBLIC cxx_std_20)
