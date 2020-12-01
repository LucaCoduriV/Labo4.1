/*
-----------------------------------------------------------------------------------
Nom du fichier  : jeuDeLaVieCalculs.h
Auteur(s)       : Chloé Fontaine & Tania Nunez & Luca Coduri
Date creation   : 27.11.2020

Description     : Ce module contient les fonctions nécessaires aux calculs
                  des prochaines générations. Ces fonctions sont implémentées dans
                  le fichier jeuDeLaVieCalculs.cpp.

Remarque(s)     : Une grille de type Grille est un tableau de type vector de 2
                  dimensions contenant des booléens. Ce type a été choisi car il
                  peut être passé en paramètre de condition et être utilisé comme
                  tel lors du calcul du nombre d'occurrences.

Compilateur     : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO4_JEUDELAVIECALCULS_H
#define LABO4_JEUDELAVIECALCULS_H

#include <vector>

using Ligne = std::vector<bool>;
using Grille = std::vector<Ligne>;

/**
 * Calcule l'état de la cellule à la prochaine génération en fonction de l'état
 * actuel de ses cellules voisines
 *
 * @param etatActuel : true si la cellule est actuellement occupée, 0 autrement
 * @param nbOccurrences : nombre de cellules voisines occupées
 * @return un booléen : true si la cellule sera vivante durant la prochaine
 * génération, false autrement
 */
bool etatCelluleGenSuivante(bool etatActuel, unsigned nbOccurrences);

/**
 * Modifie l'état de chaque cellule pour la génération suivante
 *
 * @param genActu : grille de booléens représentant la génération actuelle
 * @return une grille de booléens représentant la génération suivante
 */
Grille calculeGenSuivante(const Grille &genActu);

/**
 * Calcule le nombres de cellules voisines occupées de la cellule entrée en
 * paramètre
 *
 * @param grille : grille de booléens représentant la génération actuelle
 * @param ligne : ligne de l'emplacement de la cellule
 * @param colonne : colonne de l'emplacement de la cellule
 * @return le nombre de cellules voisines occupées
 */
unsigned nbCellulesVoisinesOccupees(const Grille &grille, size_t ligne,
                                    size_t colonne);

#endif
