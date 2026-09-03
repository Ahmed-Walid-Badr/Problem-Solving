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
            C++/AtCoder/abc043_a.cpp
            C++/AtCoder/abc218_b.cpp
            C++/Codeforces/467A.cpp
            C++/Codeforces/282A.cpp
            C++/Codeforces/231A.cpp
            C++/Codeforces/791A.cpp
            C++/Codeforces/977A.cpp
            C++/Codeforces/263A.cpp
            C++/Codeforces/492A.cpp
            C++/Codeforces/158B.cpp
            C++/Codeforces/122A.cpp
            C++/Codeforces/2132B.cpp
            C++/AtCoder/abc134_a.cpp
            C++/AtCoder/abc074_a.cpp
            C++/CodeChef/LUCLO.cpp
            C++/CodeChef/OFFBY1.cpp
            C++/EOlymp/8638.cpp
            C++/EOlymp/519.cpp
            C++/EOlymp/8888.cpp
            C++/Aizu/ITP1_1_B.cpp
            C++/Aizu/ITP1_1_C.cpp
            C++/Aizu/ITP1_1_D.cpp
    )
endforeach()
