//
// Created by Paul on 06/10/2021.
//
#include "afficher.h"
#include <stdio.h>


int getInt(){
    int a=0;
    scanf("%d",&a);
    return a;
}


float getFloat(){ // permet de saisir un entier
    float a= 0.0f;
    scanf("%f",&a);
    return a;
}



int getMax(int a, int b){
    return (a<b||b==a)? b: a;

}

int getMin(int a, int b){
    return (a<b||b==a)? a: b;

}

int maxTabIntUneDim(int tableaux[], int tailleTab){
    int maxi= tableaux[0];
    int i=0;
    for(i=0 ; i < tailleTab ; i++ ){
        if(tableaux[i] > maxi){
            maxi = tableaux[i];
        }
    }
    return maxi;
}