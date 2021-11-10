#
# Sub-project CMake file within multi-project solution using AST-Utilities
#

# Minimum required CMAKE version.
cmake_minimum_required(VERSION 3.1)

# Set project name (required by CMake)
project(Uebung2)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add executable Target
# (Target name followed by blank-separated C++ source files, no header files!)
add_executable(uebung2Blue_target MainBlue.cpp)
add_executable(uebung2Red_target MainRed.cpp)
add_executable(uebung2Black_target MainBlack.cpp)

# Specify required libraries
target_link_libraries(uebung2Black_target astu)
target_link_libraries(uebung2Red_target astu)
target_link_libraries(uebung2Blue_target astu)