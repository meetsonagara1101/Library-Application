cmake_minimum_required(VERSION 3.28)
project(MS5)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(MS5
        LibAppMain.cpp
        PublicationSelector.cpp
        PublicationSelector.h
        pubSel_Tester.cpp
        Book.cpp
        Book.h
        Date.cpp
        Date.h
        Lib.h
        LibApp.cpp
        LibApp.h
        Menu.cpp
        Menu.h
        Publication.cpp
        Publication.h
        Streamable.cpp
        Streamable.h
        Utils.cpp
        Utils.h
)
