/*
 -----------------------------------------------------------------------------------
Nom du fichier : jeuDeLaVieAffichage.h
Auteur(s)      : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation  : 27.11.2020

Description    : Ce fichier contient les fonctions gérant le point de départ du
                 jeu de la vie et l'affichage des configurations des générations
                 (grilles). Ces fonctions sont implémentées dans le fichier
                 jeuDeLaVieAffichage.cpp.

Remarque(s)    : Les constantes extern sont déclarées dans le fichier main.cpp.
                 Une grille de type Grille est un tableau de type array de 2
                 dimensions.

Compilateur    : Mingw-w64 g++ 8.1.0
 -----------------------------------------------------------------------------------
 */

#ifndef LABO4_1_JEUDELAVIEAFFICHAGE_H
#define LABO4_1_JEUDELAVIEAFFICHAGE_H
#include "jeuDeLaVieCalculs.h"

extern const char CELLULE_OCCUPEE;
extern const char CELLULE_VIDE;
extern const unsigned ESPACE_COLONNES;

/**
 * Fonction de départ du jeu de la vie
 *
 * @param grilleBase : grille de booléens de la génération 1
 * @param nbGeneration : nombre de générations pour lesquelles on veut afficher la
 * configuration
 */
void commencerJeuDeLaVie(Grille grilleBase, unsigned nbGeneration);

/**
 * Affiche la configuration d'une grille de bool
 *
 * @param grille : grille de booléens
 */
void afficherUneGeneration(const Grille& grille);

#endif //LABO4_1_JEUDELAVIEAFFICHAGE_H
