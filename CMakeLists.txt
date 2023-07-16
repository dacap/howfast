# This file is released into the public domain.
# Read LICENSE.txt for more information.

cmake_minimum_required(VERSION 3.13)

project(howfast CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Download the Google Benchmark library
include(FetchContent)
set(BENCHMARK_ENABLE_TESTING OFF CACHE BOOL "")
FetchContent_Declare(googlebenchmark
  GIT_REPOSITORY https://github.com/google/benchmark.git
  GIT_TAG        main)
FetchContent_MakeAvailable(googlebenchmark)

add_executable(howfast howfast.cpp)
target_link_libraries(howfast benchmark)
