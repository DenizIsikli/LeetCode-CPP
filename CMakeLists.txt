cmake_minimum_required(VERSION 3.15)
project(Codeforces)

set(CMAKE_CXX_STANDARD 20)

# Path to the directory containing the source files
set(PROBLEMSETS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Problemsets)

# Automatically find all .cpp files in the Problemsets directory
file(GLOB PROBLEMSETS_SOURCES "${PROBLEMSETS_DIR}/*.cpp")

# Create an executable for each source file found in the Problemsets directory
foreach(PROBLEMSET_SOURCE ${PROBLEMSETS_SOURCES})
    # Get the name of the file without the extension to use as the executable name
    get_filename_component(EXECUTABLE_NAME ${PROBLEMSET_SOURCE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${PROBLEMSET_SOURCE}
            template.h)
endforeach()

# Prevent showcase of warnings for the template file
add_library(template_utils_cpp STATIC template.cpp)

# Specify that .exe files should be cleaned up
set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "*.exe")
