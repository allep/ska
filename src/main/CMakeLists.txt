cmake_minimum_required(VERSION 3.11-3.18)
project(main)
add_executable(main src/main.cpp)

target_include_directories(${PROJECT_NAME}
	PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(main
	PRIVATE core PRIVATE application PRIVATE external)

target_compile_features(main PUBLIC cxx_std_20)

enable_testing()

# Simple naive test: it runs main and checks return code.
add_test(NAME main COMMAND main)
