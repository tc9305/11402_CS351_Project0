cmake_minimum_required(VERSION 3.10)
project(TwoSumProject VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(twosum_test
    src/main.cpp
    src/twosum.cpp
)

if(MSVC)
    target_compile_options(twosum_test PRIVATE /W4 /WX)
else()
    target_compile_options(twosum_test PRIVATE -Wall -Wextra -Werror)
endif()

enable_testing()
add_test(NAME TwoSumTest COMMAND $<TARGET_FILE:twosum_test>)
