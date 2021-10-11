#include <stdio.h>
#include "exo.h"

int main() {
    int choixExo= 0;
    do{
        printf("Tapper le num de l'exo, ou 0 pour quitter: ");
        scanf("%d", &choixExo);
        switch(choixExo){
            case 1:{
                exo1();
                break;
            }
            case 2:{
                exo2();
                break;
            }
            case 3:{
                exo3();
                break;
            }
            default:{
                break;
            }}

    }while(choixExo!=0);
    return 0;
}
