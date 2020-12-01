/*
 -----------------------------------------------------------------------------------
Nom du fichier : jeuDeLaVieGestionErreurs.cpp
Auteur(s)      : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation  : 27.11.2020

Description    : Ce fichier contient l'implémentation des prototypes des fonctions
                 déclarés dans le fichier jeuDeLaVieGestionErreurs.h.

Remarque(s)    : -

Compilateur    : Mingw-w64 g++ 8.1.0
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include "jeuDeLaVieGestionErreurs.h"

bool verifierEspacesColonnes(int espaceColonnes) {
   return espaceColonnes >= 0;
}

bool verifierTailleGrille(size_t colonnes, size_t lignes){
   return colonnes > 0 && lignes > 0;
}
