#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int main()
{
    int tableau[4];
    printf("Case 1 : ");
    scanf("%d",&tableau[0]);/*remplissage du tableau par l'utilisateur*/
    printf("\nCase 2 : ");
    scanf("%d",&tableau[1]);
    printf("\nCase 3 : ");
    scanf("%d",&tableau[2]);
    printf("\nCase 4 : ");
    scanf("%d",&tableau[3]);
    printf("\nLa somme de ces valeurs est : %d",sommeTableau(tableau,4));
    printf("\nLa moyenne de ces valeurs est : %d",moyenneTableau(tableau,4));
    return 0;
}
int sommeTableau(int tableau[], int tailleTableau)
{
    int temporaire=0, i=0;
    for(i=0; i<tailleTableau;i++)
    {
        temporaire += tableau[i];
    }
return temporaire;
}
double moyenneTableau(int tableau[], int tailleTableau)
{
    double moyenne=0;
    moyenne=sommeTableau(tableau,tailleTableau)/tailleTableau;
    return moyenne;
}
