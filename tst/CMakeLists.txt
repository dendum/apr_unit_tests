project(tst)
add_subdirectory(lib)

add_executable(tst_run product_test.cpp)

target_link_libraries(tst_run lib_lib)
target_link_libraries(tst_run gtest gtest_main)
