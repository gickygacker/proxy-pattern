cmake_minimum_required(VERSION 3.14)
project(proxy_pattern)

set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

add_library(proxy_lib subject.cpp)
target_include_directories(proxy_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(proxy_app main.cpp)
target_link_libraries(proxy_app proxy_lib)

add_executable(proxy_test test.cpp)
target_link_libraries(proxy_test proxy_lib GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(proxy_test)

install(TARGETS proxy_app DESTINATION bin)

include(CPack)
set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME "proxy-pattern")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "GickyGacker")
set(CPACK_DEBIAN_FILE_NAME DEB_DEFAULT)
