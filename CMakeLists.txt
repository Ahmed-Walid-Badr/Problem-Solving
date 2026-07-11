cmake_minimum_required(VERSION 3.20)
project(Problem_Solving)

set(CMAKE_CXX_STANDARD 17)

# Automatically finds all .cpp files inside my C++ folder and its subfolders
file(GLOB_RECURSE SOURCES "C++/*.cpp")

foreach(SOURCE_FILE ${SOURCES})
    # Extracts the file name (e.g., abc186_a) to use as the executable name
    get_filename_component(TARGET_NAME ${SOURCE_FILE} NAME_WE)

    add_executable(${TARGET_NAME} ${SOURCE_FILE}
            C++/Codeforces/50A.cpp
    )
endforeach()