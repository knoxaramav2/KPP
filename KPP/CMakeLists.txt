# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("KPP" VERSION 1.0)
configure_file(KPP/KPP.h KPP/KPP.h.in)
# Include sub-projects.
add_subdirectory ("KPP")
add_subdirectory ("KPP_Lang")
add_subdirectory ("Parser")
add_subdirectory ("Config")
add_subdirectory ("Util")