# Set the minimum version of CMake that's required 
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(hi_3)

# Here you might want to set C/C++ standards
set(CMAKE_CXX_STANDARD 11)

# If you have any project-wide compile options, you can add them here
add_compile_options(-Wall -Wextra -Wpedantic)

#enable_testing()

# Include directories for header files
#include_directories(${PROJECT_SOURCE_DIR}/src/common)
#include_directories(${PROJECT_SOURCE_DIR}/src/main_state_machine/headers)

# Add subdirectories containing the CMakeLists.txt for each component
add_subdirectory(src)

#add_subdirectory(src/)

#link_directories(src/common)
#link_directories(src/main_state_machine/headers)
