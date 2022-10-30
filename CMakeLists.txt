# Main reference for this CMakeLists.txt:
# https://computingonplains.wordpress.com/building-c-applications-with-cmake-and-visual-studio-code/
#
# version 3.11 or later of CMake needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.11-3.18)

project(
	Ska
	VERSION 0.0.1
	DESCRIPTION "Source Kode Analyzer")

include(CTest)

add_subdirectory(src)
