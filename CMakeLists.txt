cmake_minimum_required(VERSION 3.28)
project(Test4 C)

set(CMAKE_C_STANDARD 11)

add_executable(Test4 test_5_15.c)
add_executable(test1 test_5_16.c
        test_5_23.c
        test_5_25.c)
add_executable(test2 test_5_18.c)
add_executable(test3 test_5_19.c)
add_executable(test4 test_5_20.c)
add_executable(test5 test_5_21.c)
add_executable(test6 test_5_22.c)
add_executable(
        test_5_23.c
        test_5_23.c)
add_executable(test7 test_5_24.c)
add_executable(test8 test_5_25.c)
