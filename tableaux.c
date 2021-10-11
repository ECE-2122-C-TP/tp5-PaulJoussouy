//
// Created by Paul on 06/10/2021.
//
#include <stdio.h>
#include "tableaux.h"
#include "Fonction.h"


int demanderNmbreEntier(int nbreMaxi){
    int nmbreASaisir= 0;
    do{
        printf("saisir un entier positif plus petit ou egal a %d :", nbreMaxi);
        nmbreASaisir= getInt();
    }while(!(nmbreASaisir>=1 && nmbreASaisir<=nbreMaxi) );
    return nmbreASaisir;
}

void saisirNEntierDansTabUneDimension(int nmbreEntierASaisir, int tableaux[]){
    int i=0;
    for(i=0; i < nmbreEntierASaisir; i++){
        printf("saisir l'entier du tableau a la position tableaux[%d] : \t", i);
        tableaux[i]= getInt();
    }
}

void afficherTab3x4(tableaux[3][4]){
    int i= 0, j= 0;
    for(i= 0; i<3; i++ ){
        for(j= 0; j<4; j++){
            printf("%d \t", tableaux[i][j]);
        }
        printf("\n");
    }
    return;
}

void afficherTabUneDim(int tableaux[], int tailleTab){
    int i= 0;
    for(i= 0; i < tailleTab; i++ ){
        printf("%d \t", tableaux[i]);
    }
    return;
}