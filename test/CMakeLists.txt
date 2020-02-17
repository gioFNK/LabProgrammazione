 project(Google_tests)
 add_subdirectory(lib)
<<<<<<< HEAD
 include_directories(${GTEST_INCLUDE_DIRS})
 set(SOURCE_FILES runAllTests.cpp FormuleTest.h FormuleTest.h FormuleTest.cpp)
 include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
 add_executable(runAllTests ${SOURCE_FILES})
 target_link_libraries(runAllTests ${GTEST_BOTH_LIBRARIES}
         core)





=======
 include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
 add_executable(runAllTests runAllTests.cpp FormuleTest.h FormuleTest.h)
 target_link_libraries(runAllTests gtest gtest_main)
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2
