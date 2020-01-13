cmake_minimum_required(VERSION 3.14)
project(celle)

set(CMAKE_CXX_STANDARD 17)
set(Qt5_DIR "C:/Qt/5.9.9/winrt_x86_msvc2017/lib/cmake/Qt5")
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)
add_executable(celle main.cpp Observer.h Subject.h Cell.cpp Cell.h Formula.h Formula.cpp FormulaMax.h FormulaMax.cpp Table.cpp Table.h FormulaMean.h FormulaMean.cpp FormulaMin.h FormulaMin.cpp FormulaSum.h FormulaSum.cpp)

target_link_libraries(celle Qt5::Core Qt5::Widgets)







