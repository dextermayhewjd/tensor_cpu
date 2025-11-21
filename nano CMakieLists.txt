cmake_minimum_required(VERSION 3.16)
project(tensora_cpu LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(TENSORA_BUILD_TESTS "Build tensora tests" ON)

add_library(tensora_cpu
    src/tensor.cpp  # 先留一个占位
)

target_include_directories(tensora_cpu
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

if (TENSORA_BUILD_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif()
