#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "World.h"

World monde;

int main(int argc, char* argv[]){

    /* déclaration des variables */
    char commande[COMMAND_LINE_MAX+1];
    int fini = 0;
    int basic = 1; /**/
    int i = 1;

    /* gestion des arguments en ligne de commande */
    while(i < argc){
        if (0 == strcmp("--basic",argv[i])){
            basic = 1;
        } else if (0 == strcmp("--pretty",argv[i])){
            basic = 0;
        }
        i++;
    }


    /**
            A COMPLETER
     initialisation du monde avec quelques cubes


     **/
     initialiser_monde(&monde);



     monde = empiler(monde.cubes[0], 1);
     monde = empiler(monde.cubes[0], 3);
     monde = empiler(monde.cubes[0], 5);
     monde = empiler(monde.cubes[0], 4);

     affichagePile(monde.cubes[0]);


     depiler(&monde.cubes[0]);
     affichagePile(monde.cubes[0]);

    /* boucle principale */
    do {

        /**
            A COMPLETER
        gestion du monde ou des commandes

        **/

    } while(! fini);

    return 0;
}
