cmake_minimum_required(VERSION 3.20)
project(TD5 C)

set(CMAKE_C_STANDARD 99)

add_executable(TD5 main.c Fonction.c Fonction.h exo.c exo.h structure.c structure.h tableaux.c tableaux.h afficher.c afficher.h)
