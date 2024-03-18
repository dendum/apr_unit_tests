cmake_minimum_required(VERSION 3.25)
project(unit_tests)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)

add_executable(unit_tests_run ${SOURCE_FILES})

include_directories(lib)
add_subdirectory(lib)
target_link_libraries(unit_tests_run lib_lib)

add_subdirectory(tst)
