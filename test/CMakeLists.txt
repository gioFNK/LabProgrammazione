 project(Google_tests)
 add_subdirectory(lib)
 include_directories(${GTEST_INCLUDE_DIRS})
 set(SOURCE_FILES runAllTests.cpp FormuleTest.h FormuleTest.h FormuleTest.cpp)
 include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
 add_executable(runAllTests ${SOURCE_FILES})
 target_link_libraries(runAllTests ${GTEST_BOTH_LIBRARIES}
         core)

