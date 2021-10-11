//
// Created by Paul on 06/10/2021.
//
#include <stdio.h>
#include "afficher.h"



void aGetInt(int nbreInt){
    (nbreInt == 1)? printf("Entrer un entier: \t"): printf("Entrer %d entiers:\t", nbreInt);
    return;
}
