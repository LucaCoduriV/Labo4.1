/*
 -----------------------------------------------------------------------------------
Nom du fichier : jeuDeLaVieCalculs.cpp
Auteur(s)      : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation  : 27.11.2020
Description    : <à compléter>
Remarque(s)    : <à compléter>
Compilateur    : Mingw-w64 g++ 8.1.0
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>
#include "jeuDeLaVieCalculs.h"

using namespace std;


bool etatCelluleGenSuivante(bool etatActuel, unsigned nbVivant) {
   return (not etatActuel && nbVivant == 3) || (etatActuel && (nbVivant == 3
                                                               || nbVivant == 2));
}

Grille calculeGenSuivante(const Grille &genActu) {

   Grille genSuiv{};

   for (size_t i = 0; i < genActu.size(); i++) {
      for (size_t j = 0; j < genActu.at(i).size(); j++) {
         if (etatCelluleGenSuivante(genActu.at(i).at(j),
                                    nbCellulesVoisinesOccupees(genActu, i, j))) {
            genSuiv.at(i).at(j) = true;

         } else {
            genSuiv.at(i).at(j) = false;
         }
      }
   }
   return genSuiv;
}

unsigned nbCellulesVoisinesOccupees(Grille tableau, size_t ligne, size_t colonne) {
   int occurence = 0;
   unsigned ligneFin = tableau.size() - 1;
   unsigned colonneFin = tableau[0].size() - 1;

   if(ligne == 0){
      if(colonne == 0){
         occurence = tableau[0][1] + tableau[1][0] + tableau[1][1];
      }else if(colonne == colonneFin){
         occurence = tableau[0][colonneFin - 1] + tableau[1][colonneFin - 1]
                     + tableau[1][colonneFin];
      }else{
         occurence = tableau[0][colonne - 1] + tableau[0][colonne + 1]
                     + tableau[1][colonne - 1] + tableau[1][colonne]
                     + tableau[1][colonne + 1];
      }
   }else if(ligne == ligneFin){
      if(colonne == 0){
         occurence = tableau[ligneFin - 1][0] + tableau[ligneFin - 1][1]
                     + tableau[ligneFin][1];
      }else if(colonne == colonneFin){
         occurence = tableau[ligneFin - 1][colonneFin - 1] + tableau[ligneFin - 1][colonneFin]
                     + tableau[ligneFin][colonneFin - 1];
      }else{
         occurence = tableau[ligneFin - 1][colonne - 1] + tableau[ligneFin - 1][colonne]
                     + tableau[ligneFin][colonne + 1] + tableau[ligneFin][colonne - 1]
                     + tableau[ligneFin][colonne + 1];
      }
   }else{
      if(colonne == 0){
         occurence = tableau[ligne - 1][0] + tableau[ligne - 1][1] + tableau[ligne][1]
                     + tableau[ligne + 1][0] + tableau[ligne + 1][1];
      }else if(colonne == colonneFin){
         occurence = tableau[ligne - 1][colonneFin - 1] + tableau[ligne - 1][colonneFin]
                     + tableau[ligne][colonneFin - 1] + tableau[ligne + 1][colonneFin]
                     + tableau[ligne + 1][ligneFin + 1];
      }else{
         occurence = tableau[ligne - 1][colonne - 1] + tableau[ligne - 1][colonne]
                     + tableau[ligne][colonne - 1] + tableau[ligne][colonne + 1]
                     + tableau[ligne + 1][colonne - 1] + tableau[ligne + 1][colonne]
                     + tableau[ligne + 1][colonne + 1] + tableau[ligne - 1][colonne + 1];
      }
   }
   return (unsigned)occurence;
}