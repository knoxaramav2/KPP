﻿# CMakeList.txt : CMake project for KPP, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

#Add libraries
include_directories("${CMAKE_SOURCE_DIR}/Parser")
link_directories("${CMAKE_SOURCE_DIR}/Parser")

include_directories(public "${CMAKE_SOURCE_DIR}/KPP_Lang")
link_directories("${CMAKE_SOURCE_DIR}/KPP_Lang")

include_directories(public "${CMAKE_SOURCE_DIR}/Config")
link_directories("${CMAKE_SOURCE_DIR}/Config")

include_directories(public "${CMAKE_SOURCE_DIR}/Util")
link_directories("${CMAKE_SOURCE_DIR}/Util")

# Add source to this project's executable.
add_executable (KPP "KPP.cpp" "KPP.h")

# TODO: Add tests and install targets if needed.

target_link_libraries(KPP Parser)
target_link_libraries(KPP Config)
target_link_libraries(KPP Util)