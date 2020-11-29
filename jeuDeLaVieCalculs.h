//
// Created by lucac on 26.11.2020.
//

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
 * @param grille1
 * @param ligne
 * @param colonne
 * @return
 */
unsigned occurences(Grille grille1, size_t ligne, size_t colonne);

#endif //LABO4_JEUDELAVIE_H
