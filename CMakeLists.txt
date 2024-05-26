cmake_minimum_required(VERSION 3.15)
project(LeetCode-CPP)

set(CMAKE_CXX_STANDARD 20)

# Directories for Mingw-w64
include_directories("C:/Program Files/mingw-w64/include")

# Add all .cpp files in the root directory as executables
file(GLOB ROOT_SOURCES "*.cpp")
foreach(ROOT_SOURCE ${ROOT_SOURCES})
    get_filename_component(EXECUTABLE_NAME ${ROOT_SOURCE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${ROOT_SOURCE})
endforeach()

# Add all .cpp files in the Problemsets directory as executables
file(GLOB_RECURSE PROBLEMSETS_SOURCES "Problemsets/**/*.cpp")
foreach(PROBLEMSET_SOURCE ${PROBLEMSETS_SOURCES})
    get_filename_component(EXECUTABLE_NAME ${PROBLEMSET_SOURCE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${PROBLEMSET_SOURCE})
endforeach()

# Remove .exe files from the root directory
set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "*.exe")
