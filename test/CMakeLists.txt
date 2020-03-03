add_subdirectory(./lib)
    set(gtest_SOURCE_DIR, ./lib)

    add_compile_options(-std=c++11)
    set(CMAKE_CXX_FLAGS "-Wall -fPIC -std=c++11")
    set(CMAKE_CXX_FLAGS "-std=c++11" CACHE STRING "compile flags" FORCE)
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
set(SOURCE_TEST_FILES runAllTests.cpp FormuleTest.h FormuleTest.h FormuleTest.cpp CellTest.cpp)
add_executable(runAllTests ${SOURCE_TEST_FILES})
target_compile_options(runAllTests PRIVATE -fPIC)
target_link_libraries(runAllTests gtest gtest_main core)

