cmake_minimum_required(VERSION 3.10)
project(mp5)

set (CMAKE_CXX_STANDARD 11)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

file(GLOB_RECURSE MP5_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
add_library(mp5_src ${MP5_SRC})
target_include_directories(mp5_src PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(mp5 ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
target_link_libraries(mp5 mp5_src)

file(GLOB_RECURSE MP5_TEST_SRC ${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp)
add_executable(tests ${MP5_TEST_SRC})
target_link_libraries(tests mp5_src)
target_link_libraries(tests ${CONAN_LIBS})
