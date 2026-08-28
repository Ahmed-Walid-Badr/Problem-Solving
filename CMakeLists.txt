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
            C++/AtCoder/abc169_a.cpp
            C++/AtCoder/abc180_a.cpp
            C++/AtCoder/abc202_a.cpp
            C++/AtCoder/abc113_a.cpp
            C++/AtCoder/abc084_a.cpp
            C++/AtCoder/abc211_a.cpp
            C++/Codeforces/617A.cpp
            C++/Codeforces/591A.cpp
            C++/Codeforces/996A.cpp
            C++/AtCoder/abc049_a.cpp
            C++/AtCoder/abc137_a.cpp
            C++/AtCoder/abc212_a.cpp
            C++/Codeforces/4A.cpp
            C++/Codeforces/1A.cpp
            C++/AtCoder/abc070_a.cpp
            C++/AtCoder/abc096_a.cpp
            C++/AtCoder/abc150_a.cpp
            C++/HackerRank/c_tutorial_conditional_if_else.cpp
            C++/AtCoder/abc190_a.cpp
            C++/Codeforces/318A.cpp
            C++/AtCoder/abc219_a.cpp
            C++/AtCoder/abc219_a.cpp
            C++/AtCoder/abc191_a.cpp
            C++/AtCoder/abc175_a.cpp
            C++/AtCoder/abc205_a.cpp
    )
endforeach()