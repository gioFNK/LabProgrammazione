cmake_minimum_required(VERSION 3.10)
project(celle)
add_subdirectory(test)

find_package( Qt5Core REQUIRED )
find_package( Qt5Widgets REQUIRED )
find_package( Qt5Gui REQUIRED )

add_compile_options(-std=c++11)
set(CMAKE_CXX_FLAGS "-Wall -fPIC -std=c++11")
set(CMAKE_CXX_FLAGS "-std=c++11" CACHE STRING "compile flags" FORCE)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

SET (CMAKE_POSITION_INDEPENDENT_CODE ON)

set(SOURCE_FILES
    /home/giofnk/Celle/ui_mainwindow.h
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui Cell.cpp Cell.h Subject.h Observer.h Table.cpp Table.h Formula.h Formula.cpp FormulaMax.cpp FormulaMax.h FormulaMin.cpp FormulaMin.h FormulaSum.cpp FormulaSum.h FormulaMean.cpp FormulaMean.h)

add_executable(celle ${SOURCE_FILES} Formula.cpp)

target_compile_options(celle PRIVATE -fPIC)

include_directories(${Qt5Widgets_INCLUDE_DIRS})
include_directories(${Qt5Core_INCLUDE_DIRS})
include_directories(${Qt5Gui_INCLUDE_DIRS})

add_library(core ${SOURCE_FILES} )

target_link_libraries(celle core ${Qt5Widgets_LIBRARIES} ${Qt5Core_LIBRARIES} ${Qt5Gui_LIBRARIES} )
