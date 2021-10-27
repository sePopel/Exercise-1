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
add_executable(uebung1_target main.cpp)
