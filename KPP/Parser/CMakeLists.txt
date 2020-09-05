# CMakeList.txt : CMake project for KPP, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_library (Parser "Parser.cpp" "Parser.h")

link_directories("${CMAKE_SOURCE_DIR}/Util")
link_directories("${CMAKE_SOURCE_DIR}/Config")

# TODO: Add tests and install targets if needed.
target_link_libraries(Parser Config)
target_link_libraries(Parser Util)