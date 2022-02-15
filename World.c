/**
    doit contenir les fonctions de manipulations des cubes
    - créer / détruire un cube
    - prendre / poser un cube sur un cube ou sur la table
    - afficher le monde
    et les fonctions d'intéraction utilisateur
**/

#include <stdio.h>
#include <malloc.h>
#include "World.h"



/*
    Lecture d'une ligne de commande pour le robot.
    La ligne doit faire moins de 80 caracteres (cf macro COMMAND_LINE_MAX).

    Paremetre :
      sortie : commande : tableau de carateres contenant la commande lue.

    Resultat : rien
*/
void read_command(char* commande){
    printf("commande : ");
    fflush(stdout);
    fgets(commande, COMMAND_LINE_MAX, stdin);
}
/**/
void initialiser_monde(World * monde){
    int i;
    (*monde).bras = 0;
    for(i=0; i<NB_PILE_MAX; i++){ /*initialisation des piles a NULL*/
        (*monde).cubes[i] = NULL;
    }
}

