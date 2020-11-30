/*
 -----------------------------------------------------------------------------------
Nom du fichier : jeuDeLaVieCalculs.cpp
Auteur(s)      : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation  : 27.11.2020

Description    : Ce fichier contient l'implémentation des prototypes des fonctions
                 déclarées dans le fichier jeuDeLaVieCalculs.h.

Remarque(s)    :

Compilateur    : Mingw-w64 g++ 8.1.0
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>
#include <cassert>
#include "jeuDeLaVieCalculs.h"
#include "jeuDeLaVieGestionErreurs.h"

using namespace std;

bool etatCelluleGenSuivante(bool etatActuel, unsigned nbOccurences) {
   return (!etatActuel && nbOccurences == 3) ||
          (etatActuel && (nbOccurences == 3 || nbOccurences == 2));
}

Grille calculeGenSuivante(const Grille &genActu) {
   assert(verifierTailleGrille(genActu.size(), genActu.at(0).size()));
   Grille genSuiv(genActu.size(),Ligne(genActu.at(0).size()));

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

unsigned nbCellulesVoisinesOccupees(const Grille &grille, size_t ligne, size_t
colonne) {
   assert(verifierTailleGrille(grille.size(), grille.at(0).size()));
   int occ;
   size_t ligneFin = grille.size() - 1;
   size_t colonneFin = grille.at(0).size() - 1;

   // Calcule le nombre d'occurences dans le cas où la cellule se trouve dans un
   // des bords de la grille puis (dans le else) dans le cas où la cellule se
   // trouve dans le centre de la grille
   if (ligne == 0) {
      if (colonne == 0) {
         occ = grille[0][1] + grille[1][0] + grille[1][1];
      } else if (colonne == colonneFin) {
         occ = grille[0][colonneFin - 1] + grille[1][colonneFin - 1]
                + grille[1][colonneFin];
      } else {
         occ = grille[0][colonne - 1] + grille[0][colonne + 1]
                + grille[1][colonne - 1] + grille[1][colonne]
                + grille[1][colonne + 1];
      }
   } else if (ligne == ligneFin) {
      if (colonne == 0) {
         occ = grille[ligneFin - 1][0] + grille[ligneFin - 1][1]
                + grille[ligneFin][1];
      } else if (colonne == colonneFin) {
         occ = grille[ligneFin - 1][colonneFin - 1]
                + grille[ligneFin - 1][colonneFin]
                + grille[ligneFin][colonneFin - 1];
      } else {
         occ = grille[ligneFin - 1][colonne - 1] + grille[ligneFin - 1][colonne]
                + grille[ligneFin - 1][colonne + 1] + grille[ligneFin][colonne - 1]
                + grille[ligneFin][colonne + 1];
      }
   } else {
      if (colonne == 0) {
         occ = grille.at(ligne - 1).at(0)
               + grille.at(ligne - 1).at(1)
               + grille.at(ligne).at(1)
               + grille.at(ligne + 1).at(0)
               + grille.at(ligne + 1).at(1);
      } else if (colonne == colonneFin) {
         occ = grille.at(ligne - 1).at(colonneFin - 1)
               + grille.at(ligne - 1).at(colonneFin)
               + grille.at(ligne).at(colonneFin - 1)
               + grille.at(ligne + 1).at(colonneFin - 1)
               + grille.at(ligne + 1).at(colonneFin);
      } else {
         occ = grille.at(ligne - 1).at(colonne - 1)
               + grille.at(ligne - 1).at(colonne)
               + grille.at(ligne).at(colonne - 1)
               + grille.at(ligne).at(colonne + 1)
               + grille.at(ligne + 1).at(colonne - 1)
               + grille.at(ligne + 1).at(colonne)
               + grille.at(ligne + 1).at(colonne + 1)
               + grille.at(ligne - 1).at(colonne + 1);
      }
   }
   return (unsigned)occ;
}