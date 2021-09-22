project(base)

find_package(Qt5Core)

set(CMAKE_AUTOMOC ON)

add_library(base)

target_sources(base PUBLIC base.h PRIVATE base.cpp)
target_link_libraries(base PRIVATE Qt5::Core)
