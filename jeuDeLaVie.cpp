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
#include "jeuDeLaVie.h"
using namespace std;

void afficher(std::array<std::array<char, COLONNES>, LIGNES> tableau){
   for (auto ligne : tableau) {
      for (char col : ligne) {
         cout << setw(3) << col;
      }
      cout << endl;
   }
}
bool etatSuivantCellule(char etatActuel, int nbVivant){
   return (etatActuel == '.' && nbVivant == 3) || (etatActuel == 'X' && (nbVivant == 3 || nbVivant == 2));
}

array<array<char, 11>,10> calculeGenSuivante(const array<array<char, 11>,10>&
genActu){

   array<array<char, 11>,10> genSuiv{};

   for(size_t i = 0; i < genActu.size(); i++ ){
      for(size_t j = 0; j < genActu.at(i).size(); j++ ){
         if(etatSuivantCellule(genActu.at(i).at(j), 2) ){
            genSuiv.at(i).at(j) = 'X';
         }else{
            genSuiv.at(i).at(j) = '.';
         }
      }
   }
   return genSuiv;
}