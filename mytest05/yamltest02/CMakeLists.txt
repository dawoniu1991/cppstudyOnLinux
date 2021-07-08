cmake_minimum_required(VERSION 3.2)
message("aaaaaa=" ${CMAKE_HOME_DIRECTORY})
project(yaml_test)

add_definitions(-std=c++11)


include_directories(include)
set(SRCS yaml_test.cpp)
add_executable(yamltest ${SRCS})

target_link_libraries(yamltest libyaml-cpp.so)

