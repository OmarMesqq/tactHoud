cmake_minimum_required(VERSION 3.0.0)
project(tactHoud VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(tactHoud main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

# Adding and linking to Qt 
find_package(Qt5 COMPONENTS Widgets REQUIRED)
target_link_libraries(tactHoud Qt5::Widgets)
