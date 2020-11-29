/*
 -----------------------------------------------------------------------------------
Nom du fichier : jeuDeLaVieAffichage.h
Auteur(s)      : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation  : 27.11.2020
Description    : <à compléter>
Remarque(s)    : <à compléter>
Compilateur    : Mingw-w64 g++ 8.1.0
 -----------------------------------------------------------------------------------
 */

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
