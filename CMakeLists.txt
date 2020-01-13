cmake_minimum_required(VERSION 3.15)
project(leo_programming)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -g3")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -O3 -g3")
#set(CMAKE_CXX_FLAGS "-Wall -O3 -g3 " )

include_directories(include)


add_executable(leo_programming main.cpp src/Elephant.cpp)