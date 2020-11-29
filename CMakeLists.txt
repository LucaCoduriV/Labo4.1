cmake_minimum_required(VERSION 3.17)
project(Labo4_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wconversion -Wsign-conversion -pedantic")
add_executable(Labo4_1 main.cpp jeuDeLaVieCalculs.cpp jeuDeLaVieCalculs.h jeuDeLaVieAffichage.cpp jeuDeLaVieAffichage.h)