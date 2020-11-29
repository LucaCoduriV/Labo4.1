//
// Created by lucac on 26.11.2020.
//

#ifndef LABO4_JEUDELAVIE_H
#define LABO4_JEUDELAVIE_H
#include <array>

const int COLONNES = 11;
const int LIGNES = 10;

using grille = std::array<std::array<bool, COLONNES>, LIGNES>;

void afficher(grille tableau);
bool etatSuivantCellule(char etatActuel, int nbVivant);
grille calculeGenSuivante(const grille& genActu);
unsigned occurences(grille grille1, size_t ligne, size_t colonne);
#endif //LABO4_JEUDELAVIE_H
