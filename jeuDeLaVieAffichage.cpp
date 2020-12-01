/*
 -----------------------------------------------------------------------------------
Nom du fichier : jeuDeLaVieAffichage.cpp
Auteur(s)      : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation  : 27.11.2020

Description    : Ce fichier contient l'implémentation des prototypes des fonctions
                 déclarés dans le fichier jeuDeLaVieAffichage.h.

Remarque(s)    : Les fonctions de ce fichier font appel aux fonctions déclarées
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

void commencerJeuDeLaVie(Grille grilleBase, unsigned nbGeneration){
   for (unsigned i = 0; i < nbGeneration; ++i) {
      cout << endl << "Generation " << i + 1 << " :" << endl;
      afficherUneGeneration(grilleBase, SYMBOLE_OCCUPEE, SYMBOLE_VIDE);
      grilleBase = calculeGenSuivante(grilleBase);
   }
}

void afficherUneGeneration(const Grille& grille, char symboleOccupee, char
symboleVide){
   assert(verifierEspacesColonnes(ESPACE_COLONNES));
   for (const Ligne& ligne : grille) {
      for (const bool& col : ligne) {
         if (col)
            cout << setw(ESPACE_COLONNES) << symboleOccupee;
         else
            cout << setw(ESPACE_COLONNES) << symboleVide;
      }
      cout << endl;
   }
}