#
# Sub-project CMake file within multi-project solution using AST-Utilities
#

# Minimum required CMAKE version.
cmake_minimum_required(VERSION 3.1)

# Set project name (required by CMake)
project(Uebung1)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add executable Target
# (Target name followed by blank-separated C++ source files, no header files!)
add_executable(uebungBlue_target main_blue.cpp)
add_executable(uebungRed_target main_red.cpp)
add_executable(uebungBlack_target main_black.cpp)

# Specify required libraries
target_link_libraries(uebungBlack_target astu)
target_link_libraries(uebungRed_target astu)
target_link_libraries(uebungBlue_target astu)