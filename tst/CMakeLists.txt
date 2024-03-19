project(tst)
add_subdirectory(lib)

add_executable(tst_run task_1_test.cpp
        task_2_test.cpp)

target_link_libraries(tst_run lib_lib)
target_link_libraries(tst_run gtest gtest_main)
