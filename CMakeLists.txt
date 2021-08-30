SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
SET (CMAKE_CXX_FLAGS                "-std=c++17 -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS -lLLVM-10")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(CMAKE_CXX_STANDARD 17)

include_directories(${GTEST_INCLUDE_DIRS})

find_package(GTest REQUIRED)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(Tests
  src/test/Basic.cpp
)

target_link_libraries(Tests
    gtest pthread)

