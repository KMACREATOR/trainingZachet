cmake_minimum_required(VERSION 3.10)

project(preparation)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD REQUIRED ON)

add_library(print STATIC \${CMAKE_CURRENT_SOURCE_DIR}/sources)

include_directories(\${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(preparation main.cpp sources/Tool.cpp)
add_executable( )

target_link_libraries(preparation{GTEST_LIBRARY})



find_package(GTest)

