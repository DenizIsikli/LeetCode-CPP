cmake_minimum_required(VERSION 3.15)
project(LeetCode-CPP)

set(CMAKE_CXX_STANDARD 20)
    
# Function to add executable for a given source file
function(add_problem_executable source_file)
    get_filename_component(exec_name ${source_file} NAME_WE)
    add_executable(${exec_name} ${source_file})
endfunction()

# Add executables for all .cpp files in the root directory
file(GLOB_RECURSE CPP_FILES "*.cpp")
foreach(cpp_file ${CPP_FILES})
    add_problem_executable(${cpp_file})
endforeach()

# Specify that .exe files should be cleaned up
set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "*.exe")
