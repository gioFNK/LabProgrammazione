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
    mainwindow.cpp
    Cell.cpp Table.cpp Formula.cpp FormulaMax.cpp FormulaMin.cpp FormulaSum.cpp FormulaMean.cpp)

SET(CMAKE_AUTOMOC ON)
SET(CMAKE_AUTOUIC ON)
SET(CMAKE_AUTORCC ON)

add_executable(celle ${SOURCE_FILES} main.cpp)

target_compile_options(celle PRIVATE -fPIC)

include_directories(${Qt5Widgets_INCLUDE_DIRS})
include_directories(${Qt5Core_INCLUDE_DIRS})
include_directories(${Qt5Gui_INCLUDE_DIRS})

add_library(core ${SOURCE_FILES} )

target_link_libraries(celle core ${Qt5Widgets_LIBRARIES} ${Qt5Core_LIBRARIES} ${Qt5Gui_LIBRARIES} )
