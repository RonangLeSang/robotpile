/**
    doit contenir la structure du monde des blocs et les prototypes
    des fonctions de manipulations des cubes
    - créer / détruire un cube
    - prendre / poser un cube sur un cube ou sur la table
    - afficher le monde
    et des fonctions d'interaction utilisteur
**/


#ifndef WORLD_H_INCLUDED
#define WORLD_H_INCLUDED

#include <stddef.h>
#include "pile.h"

#define NB_PILE_MAX 10
#define COMMAND_LINE_MAX 80




typedef struct {

    int bras; /*bras et son contenu (0 si vide et autre si un cube est present) */
    pile cubes[NB_PILE_MAX]; /*liste cubes présent sur la table*/

} World;




#endif
