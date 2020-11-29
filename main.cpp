/*
 -----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Auteur(s)      : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation  : 27.11.2020
Description    : <à compléter>
Remarque(s)    : <à compléter>
Compilateur    : Mingw-w64 g++ 8.1.0
 -----------------------------------------------------------------------------------
 */
#include <cstdlib>
#include <iostream>
#include "jeuDeLaVieAffichage.h"

using namespace std;

const char celluleOccupee = 'X';
const char celluleVide = '.';

int main() {
   Grille grille1({});
//   grille1.at(0) = {0,0,0,0,0,0,0,0,0,0};
//   grille1.at(1) = {0,0,0,0,0,0,0,0,0,0};
//   grille1.at(2) = {0,0,0,0,0,0,0,0,0,0};
//   grille1.at(3) = {0,0,0,0,0,0,0,0,0,0};
//   grille1.at(4) = {0,0,0,0,1,1,1,0,0,0};
//   grille1.at(5) = {0,0,0,0,0,1,0,0,0,0};
//   grille1.at(6) = {0,0,0,0,0,0,0,0,0,0};
//   grille1.at(7) = {0,0,0,0,0,0,0,0,0,0};
//   grille1.at(8) = {0,0,0,0,0,0,0,0,0,0};
//   grille1.at(9) = {0,0,0,0,0,0,0,0,0,0};

   grille1.at(4).at(4) = true;
   grille1.at(4).at(5) = true;
   grille1.at(4).at(6) = true;
   grille1.at(5).at(5) = true;



   CommencerJeuDeLaVie(grille1, 10);

   return EXIT_SUCCESS;
}