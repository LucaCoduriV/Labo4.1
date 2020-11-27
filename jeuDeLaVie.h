//
// Created by lucac on 26.11.2020.
//

#ifndef LABO4_JEUDELAVIE_H
#define LABO4_JEUDELAVIE_H
#include <array>

const int COLONNES = 11;
const int LIGNES = 10;

using grille = std::array<std::array<bool, COLONNES>, LIGNES>;

void afficher(std::array<std::array<char, COLONNES>, LIGNES> tableau);
bool etatSuivantCellule(char etatActuel, int nbVivant);
grille calculeGenSuivante(const grille& genActu);
unsigned occurences(unsigned ligne, unsigned colonne);
#endif //LABO4_JEUDELAVIE_H
