/*
-----------------------------------------------------------------------------------
Nom du fichier  : jeuDeLaVieCalculs.h
Auteur(s)       : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation   : 27.11.2020

Description     : Ce fichier contient les fonctions nécessaires aux calculs
                  de la prochaine génération. Ces fonctions sont implémentées dans
                  le fichier jeuDeLaVieCalculs.cpp.

Remarque(s)     : Une grille de type Grille est un tableau de type array de 2
                  dimensions.

Compilateur     : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO4_JEUDELAVIE_H
#define LABO4_JEUDELAVIE_H
#include <vector>

using Ligne = std::vector<bool>;
using Grille = std::vector<Ligne>;

/**
 * Calcule l'état de la cellule à la prochaine génération en fonction de l'état
 * actuel de ses cellules voisines
 *
 * @param etatActuel : true si la cellule est actuellement occupée, 0 autrement
 * @param nbOccurences : nombre de cellules voisines occupées
 * @return un booléen : true si la cellule sera vivante durant la prochaine
 * génération, false autrement
 */
bool etatCelluleGenSuivante(bool etatActuel, unsigned nbOccurences);

/**
 * Modifie l'état de chaque cellule pour la génération suivante
 *
 * @param genActu : grille de booléens représentant la génération actuelle
 * @return une gille de booléens représentant la génération suivante
 */
Grille calculeGenSuivante(const Grille& genActu);

/**
 * Calcule le nombres de cellules voisines occupées de la cellule entrée en
 * paramètre
 *
 * @param grille : grille de booléens
 * @param ligne : ligne de l'emplacement de la cellule
 * @param colonne : colonne de l'emplacement de la cellule
 * @return le nombre de cellules voisines occupées
 */
unsigned nbCellulesVoisinesOccupees(const Grille &grille, size_t ligne, size_t colonne);

#endif //LABO4_JEUDELAVIE_H
