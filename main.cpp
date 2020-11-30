/*
 -----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Auteur(s)      : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation  : 27.11.2020

Description    : Ce programme implémente le jeu de la vie, inventé par J. H. Conway.
                 Chaque cellule d'une grille rectangulaire peut contenir 0 ou 1
                 habitant, et peut avoir jusqu'à 8 cellules voisines (les cellules
                 aux bords de la grille en ont moins).
                 À chaque nouvelle génération, un habitant nait s'il a 3 cellules
                 occupées à côté de la sienne. Un habitant survit s'il a 2 ou 3
                 cellules voisines occupées. Dans le cas contraire, il meurt.
                 Ce programme affiche dans la console toutes les configurations
                 pour un certains nombre de générations, en partant d'une
                 configuration initiale.

Remarque(s)    : Le programme s'éteint après avoir affiché le nombre choisi de
                 générations. Aucune saisie utilisateur/trice n'est requise.
                 Le choix des caractères représentant une cellule vide et une
                 cellule occupée peut être modifié.
                 Une grille de type Grille est un tableau de type array de 2
                 dimensions.

Compilateur    : Mingw-w64 g++ 8.1.0
 -----------------------------------------------------------------------------------
 */
#include <cstdlib>
#include <iostream>
#include "jeuDeLaVieAffichage.h"

using namespace std;

const char CELLULE_OCCUPEE = 'X';
const char CELLULE_VIDE = '.';
const unsigned ESPACE_COLONNES = 3;
const size_t COLONNES = 11;
const size_t LIGNES = 10;
const unsigned NB_GENERATION = 20;

int main() {
   Grille genBase(LIGNES, Ligne(COLONNES));
   // Configuration initiale
   genBase.at(4).at(4) = true;
   genBase.at(4).at(5) = true;
   genBase.at(4).at(6) = true;
   genBase.at(5).at(5) = true;

   commencerJeuDeLaVie(genBase, NB_GENERATION);

   return EXIT_SUCCESS;
}

/*
 * Question complémentaire : Que peut-on observer dans les résultats obtenus ?
 *
 * Pour la configuration initiale du Tétramino, nous pouvons observer un résultat
 * cyclique à partir de la 11ème génération, alternant entre une croix et  un cercle.
 */