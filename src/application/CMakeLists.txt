cmake_minimum_required(VERSION 3.11-3.18)

project(application)

add_library(application src/application.cpp)

target_include_directories(${PROJECT_NAME}
	PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_compile_features(application PUBLIC cxx_std_20)