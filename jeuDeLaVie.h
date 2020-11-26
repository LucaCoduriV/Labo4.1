//
// Created by lucac on 26.11.2020.
//

#ifndef LABO4_JEUDELAVIE_H
#define LABO4_JEUDELAVIE_H
#include <array>

const int COLONNES = 11;
const int LIGNES = 10;

void afficher(std::array<std::array<char, COLONNES>, LIGNES> tableau);
bool etatSuivantCellule(char etatActuel, int nbVivant);
std::array<std::array<char, 11>,10> calculeGenSuivante(const
   std::array<std::array<char, 11>,10>& genActu);
#endif //LABO4_JEUDELAVIE_H
