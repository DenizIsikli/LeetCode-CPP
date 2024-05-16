cmake_minimum_required(VERSION 3.15)
project(LeetCode-CPP)

set(CMAKE_CXX_STANDARD 20)

# Root
set(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
# CPP files in the root directory
file(GLOB ROOT_SOURCES "${ROOT_DIR}/*.cpp")

foreach(ROOT_SOURCE ${ROOT_SOURCES})
    # Filename and add executable
    get_filename_component(EXECUTABLE_NAME ${ROOT_SOURCE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${ROOT_SOURCE}
            template.h)
endforeach()

# Problemsets
set(PROBLEMSETS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Problemsets)
# CPP files in the Problemsets directory
file(GLOB PROBLEMSETS_SOURCES "${PROBLEMSETS_DIR}/*.cpp")

foreach(PROBLEMSET_SOURCE ${PROBLEMSETS_SOURCES})
    # Filename and add executable
    get_filename_component(EXECUTABLE_NAME ${PROBLEMSET_SOURCE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${PROBLEMSET_SOURCE}
            template.h)
endforeach()

# Problemsets/Problems
set(PROBLEMS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Problemsets/Problems)
# CPP files in the Problems directory
file(GLOB PROBLEMS_SOURCES "${PROBLEMS_DIR}/*.cpp")

foreach(PROBLEM_SOURCE ${PROBLEMS_SOURCES})
    # Filename and add executable
    get_filename_component(EXECUTABLE_NAME ${PROBLEM_SOURCE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${PROBLEM_SOURCE}
            template.h)
endforeach()

# Prevent showcase of warnings for the template file
add_library(template_utils_cpp STATIC template.cpp)

# Specify that .exe files should be cleaned up
set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "*.exe")
