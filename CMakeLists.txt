cmake_minimum_required(VERSION 3.15)
project(LeetCode-CPP)

set(CMAKE_CXX_STANDARD 20)

# Directories for Mingw-w64
include_directories("C:/Program Files/mingw-w64/include")

# Add all .cpp files in the project directory and subdirectories as executables
file(GLOB_RECURSE ALL_SOURCES "*.cpp")
foreach(SOURCE ${ALL_SOURCES})
    get_filename_component(EXECUTABLE_NAME ${SOURCE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SOURCE})
endforeach()

# Specify that .exe files should be cleaned up
set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "*.exe")
