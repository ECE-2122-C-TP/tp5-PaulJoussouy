//
// Created by Paul on 06/10/2021.
//

#ifndef TD5_STRUCTURE_H
#define TD5_STRUCTURE_H

typedef struct NombreRationnel{
    int p, q;
}Nr;

/*=====================================================================
In: une structure Nr (=Nombre rationnel)
But: afficher un nombre rationnel de l forme: "p/q"
Out: rien
*/
void afficherNr(Nr nmbrRationnel);
//..................................

/*=====================================================================
In: rien
But: saisir les entier pour la structure Nr (=nombre rationnel)
Out: une structure Nr
*/
Nr getNr();
//..................................
/*=====================================================================
In: une structure Nr (=nombre rationnel)
But: trouver le PGCD entre deux nombres
Out: le PGCD des deux nombre en entrée
PS: cet algo est basé sur l'agoritme d'euclide
*/
int pgcd(Nr nmbrRationnel);
//..................................
/*=====================================================================
In: deux structure Nr (=nombre rationnel)
But: fait le produit des deux structures
Out: une structure Nr qui correspond au produit des deux premieres
*/
Nr multiplication(Nr premNr, Nr deuxNr);
//..................................
/*=====================================================================
In: deux structure Nr (=nombre rationnel)
But: fait la somme des deux structures
Out: une structure Nr qui correspond a la somme des deux premieres
*/
Nr addition(Nr premNr, Nr deuxNr);
//..................................
/*=====================================================================
In: une structure Nr (=nombre rationnel)
But: mettre un Nr sous forme ireductible
Out: une structure Nr sous forme ireductible
*/
Nr simplifierNr(Nr nmbreRationnel);
//..................................


#endif //TD5_STRUCTURE_H
