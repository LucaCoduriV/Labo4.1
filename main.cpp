/*
 -----------------------------------------------------------------------------------
Nom du fichier : <nom du fichier>.<xxx> (xxx = h ou cpp)
Auteur(s)      : <prénom> <nom>
Date creation  : <jj.mm.aaaa>
Description    : <à compléter>
Remarque(s)    : <à compléter>
Compilateur    : Mingw-w64 g++ 8.1.0
 -----------------------------------------------------------------------------------
 */
#include <cstdlib>
#include <iostream>
#include <array>
#include "jeuDeLaVie.h"

using namespace std;

int main() {
   array<array<char, COLONNES>, LIGNES> tableau;

   for (int i = 0; i < tableau.size(); i++) {
      tableau[i].fill('.');
   }
   calculeGenSuivante(tableau);
   afficher(tableau);
   return EXIT_SUCCESS;
}