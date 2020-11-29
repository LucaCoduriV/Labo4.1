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
#include <iomanip>
#include "jeuDeLaVieCalculs.h"
using namespace std;




bool etatSuivantCellule(bool etatActuel, unsigned nbVivant){
   return (not etatActuel && nbVivant == 3) || (etatActuel && (nbVivant == 3
   || nbVivant == 2));
}

Grille calculeGenSuivante(const Grille& genActu){

   Grille genSuiv{};

   for(size_t i = 0; i < genActu.size(); i++ ){
      for(size_t j = 0; j < genActu.at(i).size(); j++ ){
         if(etatSuivantCellule(genActu.at(i).at(j), occurences(genActu, i,j)) ){
            genSuiv.at(i).at(j) = true;

         }else{
            genSuiv.at(i).at(j) = false;
         }
      }
   }
   return genSuiv;
}

unsigned occurences(Grille tableau, size_t ligne, size_t colonne ) {
   unsigned occ = 0;
   unsigned ligneFin = tableau.size() - 1;
   unsigned colonneFin = tableau[0].size() - 1;
   if (ligne == 0 && colonne == 0) {
      occ = tableau[0][1] + tableau[1][0] + tableau[1][1];
   }
   else if (ligne == 0 && colonne == colonneFin) {
      occ = tableau[0][colonneFin - 1] + tableau[1][colonneFin - 1]
            + tableau[1][colonneFin];
   }
   else if (ligne == ligneFin && colonne == 0) {
      occ = tableau[ligneFin - 1][0] + tableau[ligneFin - 1][1]
            + tableau[ligneFin][1];
   }
   else if (ligne == ligneFin && colonne == colonneFin) {
      occ = tableau[ligneFin - 1][colonneFin - 1] + tableau[ligneFin - 1][colonneFin]
            + tableau[ligneFin][colonneFin - 1];
   }
   else if (ligne == 0 && colonne != 0 && colonne != colonneFin) {
      occ = tableau[0][colonne - 1] + tableau[0][colonne + 1]
            + tableau[1][colonne - 1] + tableau[1][colonne]
            + tableau[1][colonne + 1];
   }
   else if (ligne == ligneFin && colonne != 0 && colonne != colonneFin) {
      occ = tableau[ligneFin - 1][colonne - 1] + tableau[ligneFin - 1][colonne]
            + tableau[ligneFin][colonne + 1] + tableau[ligneFin][colonne - 1]
            + tableau[ligneFin][colonne + 1];
   }
   else if (ligne != 0 && ligne != ligneFin && colonne == 0) {
      occ = tableau[ligne - 1][0] + tableau[ligne - 1][1] + tableau[ligne][1]
            + tableau[ligne + 1][0] + tableau[ligne + 1][1];
   }
   else if (ligne != 0 && ligne != ligneFin && colonne == colonneFin) {
      occ = tableau[ligne - 1][colonneFin - 1] + tableau[ligne - 1][colonneFin]
            + tableau[ligne][colonneFin - 1] + tableau[ligne + 1][colonneFin]
            + tableau[ligne + 1][ligneFin + 1];
   }
   else {
      occ = tableau[ligne - 1][colonne - 1] + tableau[ligne - 1][colonne]
            + tableau[ligne][colonne - 1] + tableau[ligne][colonne + 1]
            + tableau[ligne + 1][colonne - 1] + tableau[ligne + 1][colonne]
            + tableau[ligne + 1][colonne + 1] + tableau[ligne - 1][colonne + 1];
   }
}