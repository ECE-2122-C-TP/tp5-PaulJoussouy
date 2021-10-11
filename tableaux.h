//
// Created by Paul on 06/10/2021.
//

#ifndef TD5_TABLEAUX_H
#define TD5_TABLEAUX_H

# define TAILLE_MAX_EXO_2 100


/*=====================================================================
In: un entier "n"
But: afficher une phrase qui demande se saisir un entier compris entre 0 et n
Out: l'entier saisie
*/
int demanderNmbreEntier(int nbreMaxi);
//..................................

/*=====================================================================
In: un entier "n"
But: saisir toutes les valeurs d'un tableau a une dimension
Out:
In/out:un tableau de une dimension
PS: ATTENTION!! cette fonction ne fonctionne qu pour les tableaux de une dimension
*/
void saisirNEntierDansTabUneDimension(int nmbreEntierASaisir, int tableaux[]);
//..................................

/*=====================================================================
In: tableaux 3x4
But:afficher un tableau 3X4
Out: un tableau 3x4 bien afficher
In/out:rien
*/
void afficherTab3x4(tableaux[3][4]);
//..................................

/*=====================================================================
In: tableaux et la taille du tableau
But:afficher le un tableau
Out: rien
In/out:rien
*/
void afficherTabUneDim(int tableaux[], int tailleTab);
//..................................








#endif //TD5_TABLEAUX_H
