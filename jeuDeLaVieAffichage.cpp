/*
 -----------------------------------------------------------------------------------
Nom du fichier : jeuDeLaVieAffichage.cpp
Auteur(s)      : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation  : 27.11.2020

Description    : Ce fichier contient l'implémentation des prototypes des fonctions
                 déclarées dans le fichier jeuDeLaVieAffichage.h.

Remarque(s)    : Les fonctions de ce fichier font appels aux fonctions déclarées
                 dans le fichier jeuDeLaVieCalculs.h.

Compilateur    : Mingw-w64 g++ 8.1.0
 -----------------------------------------------------------------------------------
 */

#include <iostream>
#include <iomanip>
#include <cassert>
#include "jeuDeLaVieAffichage.h"
#include "jeuDeLaVieGestionErreurs.h"

using namespace std;

void commencerJeuDeLaVie(Grille schemaBase, unsigned nbGeneration){
   for (unsigned i = 0; i < nbGeneration; ++i) {
      cout << endl << "Generation " << i + 1 << " :" << endl;
      afficherUneGeneration(schemaBase);
      schemaBase = calculeGenSuivante(schemaBase);
   }
}

void afficherUneGeneration(const Grille& tableau){
   assert(verifierEspacesColonnes(ESPACE_COLONNES));
   for (Ligne ligne : tableau) {
      for (bool col : ligne) {
         if (col)
            cout << setw(ESPACE_COLONNES) << CELLULE_OCCUPEE;
         else
            cout << setw(ESPACE_COLONNES) << CELLULE_VIDE;
      }
      cout << endl;
   }
}