/*
 -----------------------------------------------------------------------------------
Nom du fichier : jeuDeLaVieGestionErreurs.cpp
Auteur(s)      : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation  : 27.11.2020

Description    : <à compléter>

Remarque(s)    : <à compléter>

Compilateur    : Mingw-w64 g++ 8.1.0
 -----------------------------------------------------------------------------------
 */

#ifndef LABO4_1_JEUDELAVIEGESTIONERREURS_H
#define LABO4_1_JEUDELAVIEGESTIONERREURS_H

/**
 * Vérifie que le nombre d'espaces entre les colonnes soit nul ou positif
 *
 * @param ESPACE_COLONNES : nombre d'espaces à afficher entre chaque colonne de la
 * grille
 * @return un booléen : true si la condition est respectée, false autrement
 */
bool verifierEspacesColonnes(int espaceColonnes);
/**
 *
 * @param COLONNES
 * @param LIGNES
 * @return
 */
bool verifierTailleGrille(size_t COLONNES, size_t LIGNES);

#endif
