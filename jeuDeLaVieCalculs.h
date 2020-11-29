/*
-----------------------------------------------------------------------------------
Nom du fichier  : jeuDeLaVieCalculs.h
Auteur(s)       : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation   : 27.11.2020
Description     : <à compléter>
Remarque(s)     : <à compléter>
Compilateur     : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO4_JEUDELAVIE_H
#define LABO4_JEUDELAVIE_H
#include <array>

const int COLONNES = 11;
const int LIGNES = 10;

using Ligne = std::array<bool, COLONNES>;
using Grille = std::array<Ligne, LIGNES>;

/**
 *
 * @param etatActuel
 * @param nbVivant
 * @return
 */
bool etatSuivantCellule(char etatActuel, int nbVivant);
/**
 *
 * @param genActu
 * @return
 */
Grille calculeGenSuivante(const Grille& genActu);
/**
 *
 * @param tableau
 * @param ligne
 * @param colonne
 * @return
 */
unsigned nbCellulesVoisinesOccupees(Grille tableau, size_t ligne, size_t colonne);

#endif //LABO4_JEUDELAVIE_H
