project(base)

find_package(Qt5Core)


add_library(base STATIC base.cpp base.h)
target_link_libraries(base Qt5::Core)

install(TARGETS base)
