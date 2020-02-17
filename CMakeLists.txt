cmake_minimum_required(VERSION 3.10)
project(celle)
add_subdirectory(test)
add_compile_options(-std=c++11)
set(CMAKE_CXX_FLAGS "-std=c++11" CACHE STRING "compile flags" FORCE)


<<<<<<< HEAD
set(CMAKE_INCLUDE_CURRENT_DIR ON)
=======
set(CMAKE_PREFIX_PATH "C:/Qt/5.14.1/mingw73_32/lib/cmake/Qt5")
set(Qt5_DIR "C:/Qt/5.14.1/mingw73_32/lib/cmake/Qt5")
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS Core Widgets Gui REQUIRED)


>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2
set(project_headers mainwindow.h)
set(project_sources
        mainwindow.cpp
        main.cpp
        Observer.h
        Subject.h
        Cell.cpp
        Cell.h
        Formula.h
        Formula.cpp
        FormulaMax.h
        FormulaMax.cpp
        Table.cpp
        Table.h
        FormulaMean.h
        FormulaMean.cpp
        FormulaMin.h
        FormulaMin.cpp
        FormulaSum.h
        FormulaSum.cpp)
<<<<<<< HEAD

set(project_ui
        mainwindow.ui)

qt5_wrap_ui(project_headers_moc ${project_ui})
qt5_wrap_cpp(project_sources_moc ${project_headers})
add_executable(celle ${project_sources} ${project_headers} ${project_headers_moc} ${project_sources_moc})
add_library(core ${project_sources})

=======
set(project_ui
        mainwindow.ui)
qt5_wrap_ui(project_headers_moc ${project_ui})
qt5_wrap_cpp(project_sources_moc ${project_headers})
add_executable(celle ${project_sources} ${project_headers} ${project_headers_moc} ${project_sources_moc})
>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2


target_link_libraries(celle
        PUBLIC
        Qt5::Core
        Qt5::Widgets
        Qt5::Gui)

<<<<<<< HEAD
find_package(Qt5 COMPONENTS Core Widgets Gui REQUIRED)
=======




>>>>>>> f30c9146d9f684c0c6f37a940c4dc569e3d9f6e2


