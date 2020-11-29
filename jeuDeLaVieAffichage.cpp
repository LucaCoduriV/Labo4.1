/*
 -----------------------------------------------------------------------------------
Nom du fichier : jeuDeLaVieAffichage.cpp
Auteur(s)      : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation  : 27.11.2020
Description    : <à compléter>
Remarque(s)    : <à compléter>
Compilateur    : Mingw-w64 g++ 8.1.0
 -----------------------------------------------------------------------------------
 */

#include "jeuDeLaVieAffichage.h"
#include <iostream>
#include <iomanip>

using namespace std;

void CommencerJeuDeLaVie(Grille schemaBase, unsigned nbGeneration){
   for (unsigned i = 0; i < nbGeneration; ++i) {
      cout << endl << "Generation numero " << i + 1 << " :" << endl;
      afficherUneGeneration(schemaBase);
      schemaBase = calculeGenSuivante(schemaBase);
   }
}

void afficherUneGeneration(Grille tableau){
   for (Ligne ligne : tableau) {
      for (bool col : ligne) {
         if (col)
            cout << setw(3) << celluleOccupee;
         else
            cout << setw(3) << celluleVide;
      }
      cout << endl;
   }
}