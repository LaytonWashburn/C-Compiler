cmake_minimum_required(VERSION 3.30)

set(PROJECT COMPILER)
set(EXECUTABLE compiler)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(SOURCE
    main.cpp)

project(${PROJECT})


add_subdirectory(lexer)

add_executable(${EXECUTABLE} ${SOURCE})

target_link_libraries(${EXECUTABLE} lexer)


