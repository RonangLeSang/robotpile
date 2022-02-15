/**
    doit contenir les structures et les prototypes
    des fonctions de gestion des piles
**/

#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED

#include <stddef.h>


struct cube {
    int num; /*numero du cube*/
    struct cube *suivant;
};

typedef struct cube *pile;

#endif


