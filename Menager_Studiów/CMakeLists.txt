cmake_minimum_required(VERSION 3.16)

project(MenagerStudiow LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

set(SOURCES
    main.cpp
    MainWindow.cpp
    Student.cpp
    DataManager.cpp
)

set(HEADERS
    MainWindow.h
    Student.h
    DataManager.h
    Exception.h
    MainWindow.ui  # <---- TO JEST KLUCZOWE
)

add_executable(${PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
)

target_link_libraries(${PROJECT_NAME} Qt6::Widgets)
