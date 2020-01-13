cmake_minimum_required(VERSION 3.14)

project(test)

add_subdirectory(./lib/googletest)

set(gtest_SOURCE_DIR, ./lib/googletest/)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(Qt5_DIR "C:/Qt/5.9.9/winrt_x86_msvc2017/lib/cmake/Qt5")

find_package( Qt5Test REQUIRED)

set(TEST_SOURCE_FILES runAllTests.cpp FormuleTest.h CellTest.h)

add_executable(test ${TEST_SOURCE_FILES})

target_link_libraries(runAllTests gtest gtest_main core ${Qt5Test_LIBRARIES})

