project(test1)

find_package(Qt5Core)

set(CMAKE_AUTOMOC ON)

add_library(test1 STATIC test1.h test1.cpp)
target_link_libraries(test1 PRIVATE base Qt5::Core)

install(TARGETS test1)
install(FILES ../base/base.h DESTINATION ${CMAKE_INSTALL_PREFIX}/base)
install(FILES test1.h DESTINATION ${CMAKE_INSTALL_PREFIX}/test1)
