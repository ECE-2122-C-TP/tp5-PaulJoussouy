//
// Created by Paul on 06/10/2021.
//
#include <stdio.h>
#include "afficher.h"
#include "structure.h"
#include "tableaux.h"
#include "Fonction.h"
#include "exo.h"

void exo1(){
    Nr premierNr, deuxNr;
    // initialisation des structures Nr:
    premierNr.p= 0;
    premierNr.q= 1;
    deuxNr.p= 0;
    deuxNr.q= 1;

    // saisie des structures Nr:
    printf("saisir deux nonbres rationnels \n");
    premierNr= getNr();
    deuxNr= getNr();
    printf("Premier nombre rationnel non simplifie : \n");
    afficherNr(premierNr);
    printf("Deuxieme nombre rationnel non simplifie : \n");
    afficherNr(deuxNr);
    printf("Premier nombre rationnel simplifie : \n");
    afficherNr(simplifierNr(premierNr));
    printf("Deuxieme nombre rationnel simplifie : \n");
    afficherNr(simplifierNr(deuxNr));
    printf("Somme simplifie des deux nombres rationnel : \n");
    afficherNr(simplifierNr(addition(premierNr, deuxNr)));
    printf("Produit simplifie des deux nombres rationnel : \n");
    afficherNr(simplifierNr(multiplication(premierNr, deuxNr)));

    printf("Fin de l'exo 1 \n");
    printf("===================\n");

    return ;

}
void exo2(){
    int tableaux[TAILLE_MAX_EXO_2]={0};
    saisirNEntierDansTabUneDimension(demanderNmbreEntier(TAILLE_MAX_EXO_2), tableaux );
    printf("le max est: %d \n", maxTabIntUneDim(tableaux, TAILLE_MAX_EXO_2));

    printf("Fin de l'exo 2 \n");
    printf("===================\n");

    return;

}

void exo3(){
    int tableaux[3][4]={{0}};
    int tableauxUneDim[12]={0};
    int i=0, j=0, rang=0;

    //Fabriquer le tableau 3x4:
    for(i=0 ; i<3 ; i++){
        saisirNEntierDansTabUneDimension(4,tableaux[i]);
    }
    afficherTab3x4(tableaux);

    //Fabriquer tableau a une ligne avec celui de 3x4:
    for(i=0 ; i<3 ; i++ ){
        for(j=0 ; j<4 ; j++){
            tableauxUneDim[rang]= tableaux[i][j];
            rang+= 1;
        }
    }
    afficherTabUneDim(tableauxUneDim, 12);

    printf(" \n");
    printf("Fin de l'exo 3 \n");
    printf("===================\n");

    return;
}
