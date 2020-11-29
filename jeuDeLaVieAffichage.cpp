//
// Created by lucac on 29.11.2020.
//

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
         if (col) {
            cout << setw(3) << "X";
         }
         else { cout << setw(3) << "."; }
      }
      cout << endl;
   }
}