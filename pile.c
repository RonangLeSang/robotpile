/**
    doit contenir les fonctions de gestion des piles
**/

#include <stdio.h>
#include <malloc.h>
#include "pile.h"

pile empiler(pile p, int val){
    pile ptelt;
    ptelt=(pile)malloc(sizeof(struct cube));

    ptelt->num = val;
    ptelt->suivant = p;

    return ptelt;
}

void depiler(pile *ptp){
    int res=-1;
    pile tete=*ptp;
    pile s;

    if(*ptp!=NULL){
        s=tete->suivant;
        free(tete);
        *ptp = s;
    }
}

void affichagePile(pile pp){
    while(pp!=NULL){
        printf("ELEMENT %d --> ", pp->num);
        pp=pp->suivant;
    }
}
