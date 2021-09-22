project(test2)

find_package(Qt5Core)

set(CMAKE_AUTOMOC ON)

add_library(test2 STATIC test2.h test2.cpp)
target_link_libraries(test2 PRIVATE base Qt5::Core)

install(TARGETS test2)
install(FILES test2.h DESTINATION ${CMAKE_INSTALL_PREFIX}/test2)

