//
// Created by Paul on 06/10/2021.
//
#include <stdio.h>
#include "structure.h"
#include "afficher.h"
#include "Fonction.h"


Nr getNr(){
    Nr resultatSortie;
    resultatSortie.p= 0;
    resultatSortie.q= 0;
    printf("On va saisir un nombre rationnel 'p/q':\n");
    aGetInt(2);
    printf("\n");
    printf("\t");
    printf("Saisir le premier entier 'p':\t");
    scanf("%d", &resultatSortie.p);
    printf("\t");
    printf("Saisir le deuxieme entier 'q':\t");
    scanf("%d", &resultatSortie.q);

    return resultatSortie;

}

void afficherNr(Nr nmbrRationnel){
    printf("%d / %d \n",nmbrRationnel.p, nmbrRationnel.q);
    return;
}

int pgcd(Nr nmbrRationnel){
    int a=0,b=0, reste=0;
    a= getMax(nmbrRationnel.p,nmbrRationnel.q);
    b= getMin(nmbrRationnel.p,nmbrRationnel.q);
    if(b==0){
        return a;
    }
    while(b!= 0){
        reste= a%b;
        a= b;
        b= reste;
    }
    return a;
}

Nr multiplication(Nr premNr, Nr deuxNr){
    Nr produit;
    produit.p= 0;
    produit.q= 0;
    produit.p= premNr.p * deuxNr.p ;
    produit.q= premNr.q * deuxNr.q ;
    return produit;
}

Nr addition(Nr premNr, Nr deuxNr){
    Nr somme;
    somme.p= 0;
    somme.q= 0;
    somme.p= premNr.p * deuxNr.q + premNr.q * deuxNr.p;
    somme.q= premNr.q * deuxNr.q;
    return somme;
}

Nr simplifierNr(Nr nmbreRationnel){
    Nr nRSimplifier;
    nRSimplifier.p=0;
    nRSimplifier.q=1;
    nRSimplifier.p= nmbreRationnel.p / pgcd(nmbreRationnel);
    nRSimplifier.q= nmbreRationnel.q / pgcd(nmbreRationnel);
    return nRSimplifier;

}
