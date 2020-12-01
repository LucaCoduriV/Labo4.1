/*
 -----------------------------------------------------------------------------------
Nom du fichier : jeuDeLaVieGestionErreurs.cpp
Auteur(s)      : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation  : 27.11.2020

Description    : Ce module contient les fonctions qui permettent la vérification
                 des erreurs de programmation. Ces fonctions vérifient certains
                 paramètres et renvoient true si leurs paramètres passent la
                 vérification. Elles renvoient false dans le cas contraire. Ces
                 fonctions sont implémentées dans le fichier
                 jeuDeLaVieGestionErreurs.cpp.

Remarque(s)    : Ces fonctions peuvent être utilisées dans des assert afin de
                 stopper le programme dans le cas où les paramètres passés
                 seraient faux.

Compilateur    : Mingw-w64 g++ 8.1.0
 -----------------------------------------------------------------------------------
 */

#ifndef LABO4_1_JEUDELAVIEGESTIONERREURS_H
#define LABO4_1_JEUDELAVIEGESTIONERREURS_H

/**
 * Vérifie que le nombre d'espaces entre les colonnes soit nul ou positif
 *
 * @param espacesColonnes : nombre d'espaces à afficher entre chaque colonne de la
 * grille
 * @return un booléen : true si la condition est respectée, false autrement
 */
bool verifierEspacesColonnes(int espaceColonnes);

/**
 * Vérifie que la taille de la grille soit de minimum 1x1
 *
 * @param colonnes : nombre de colonnes de la grille
 * @param lignes : nombre de lignes de la grille
 * @return un booléen : true si la condition est respectée, false autrement
 */
bool verifierTailleGrille(size_t colonnes, size_t lignes);

#endif
