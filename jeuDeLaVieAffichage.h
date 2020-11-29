

#ifndef LABO4_1_JEUDELAVIEAFFICHAGE_H
#define LABO4_1_JEUDELAVIEAFFICHAGE_H
#include "jeuDeLaVieCalculs.h"

extern const char celluleOccupee;
extern const char celluleVide;

/**
 *
 * @param tableau
 */
void afficherUneGeneration(Grille tableau);
/**
 *
 * @param schemaBase
 * @param nbGeneration
 */
void CommencerJeuDeLaVie(Grille schemaBase, unsigned nbGeneration);

#endif //LABO4_1_JEUDELAVIEAFFICHAGE_H
