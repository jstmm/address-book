cmake_minimum_required(VERSION 3.5.0)
project(address-book VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

# Define MY_SOURCES to be a list of all the source files for my project
file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c")

add_executable(address-book "${MY_SOURCES}")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

target_include_directories(address-book PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/")