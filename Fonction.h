//
// Created by Paul on 06/10/2021.
//

#ifndef TD5_FONCTION_H
#define TD5_FONCTION_H

/*=====================================================================
In: rien
But: saisir un entier
Out: l'entier saisit
*/
int getInt();
//..................................

/*=====================================================================
In: rien
But: saisir un floatant
Out: le floatant saisit
*/
float getFlaot();
//..................................

/*=====================================================================
In: deux intiers
But: trouver le max entre deux entiers
Out: le max entre les deux entiers
*/
int getMax(int a, int b);
//..................................
/*=====================================================================
In: deux intiers
But: trouver le min entre deux entiers
Out: le min entre les deux entiers
*/
int getMin(int a, int b);
//..................................
/*=====================================================================
In: un entier qui correspond a la taille du tableau
But: trouver le mxi dans un tableau
Out: le max du tableau
In/Out: rien
PS: ATTENTION!! cette fonction ne fonctionne que pour un tableau une dim
*/
int maxTabIntUneDim(int tableaux[], int tailleTab);
//..................................


#endif //TD5_FONCTION_H
