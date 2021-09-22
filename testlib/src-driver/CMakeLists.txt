cmake_minimum_required(VERSION 3.14)

project(testrt)

find_package(Qt5Core)

set(CMAKE_AUTOMOC ON)

include_directories(/home/boris/work/tasks/testlib/bin-lib)
link_directories(/home/boris/work/tasks/testlib/bin-lib/lib)

add_executable(testrt main.cpp)
target_link_libraries(testrt test2 test1 Qt5::Core)
