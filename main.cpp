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
                 cellule occupée peut être modifié. Les dimensions de la grille,
                 le nombre de générations à afficher et les espacements entre
                 colonnes peuvent également être choisis.
                 Une grille de type Grille est un tableau de type vector de 2
                 dimensions de booléens.
                 La taille maximale de cette grille correspond à la taille
                 maximale d'un vector.

Compilateur    : Mingw-w64 g++ 8.1.0
 -----------------------------------------------------------------------------------
 */
#include <cstdlib>
#include "jeuDeLaVieAffichage.h"

using namespace std;

const char SYMBOLE_OCCUPEE = 'X';
const char SYMBOLE_VIDE = '.';
const int ESPACE_COLONNES = 3;
const size_t COLONNES = 11;
const size_t LIGNES = 10;
const unsigned NB_GENERATIONS = 20;

int main() {
   Grille genBase(LIGNES, Ligne(COLONNES));
   // Configuration initiale
   genBase.at(4).at(4) = true;
   genBase.at(4).at(5) = true;
   genBase.at(4).at(6) = true;
   genBase.at(5).at(5) = true;

   commencerJeuDeLaVie(genBase, NB_GENERATIONS);

   return EXIT_SUCCESS;
}

/*
 * Question complémentaire : Que peut-on observer dans les résultats obtenus ?
 *
 * Pour la configuration initiale du Tétramino, nous pouvons observer un résultat
 * cyclique à partir de la 11ème génération, alternant entre une croix et  un cercle.
 */