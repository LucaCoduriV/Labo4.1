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
#include "jeuDeLaVie.h"
#include <unistd.h>

using namespace std;

int main() {
   grille grille1({});
   grille1.at(0) = {0,0,0,0,0,0,0,0,0,0};
   grille1.at(1) = {0,0,0,0,0,0,0,0,0,0};
   grille1.at(2) = {0,0,0,0,0,0,0,0,0,0};
   grille1.at(3) = {0,0,0,0,0,0,0,0,0,0};
   grille1.at(4) = {0,0,0,0,1,1,1,0,0,0};
   grille1.at(5) = {0,0,0,0,0,1,0,0,0,0};
   grille1.at(6) = {0,0,0,0,0,0,0,0,0,0};
   grille1.at(7) = {0,0,0,0,0,0,0,0,0,0};
   grille1.at(8) = {0,0,0,0,0,0,0,0,0,0};
   grille1.at(9) = {0,0,0,0,0,0,0,0,0,0};




   while(true){
      sleep(1);
      cout << "\n\n\n\n\n\n\n";
      afficher(grille1);
      grille1 = calculeGenSuivante(grille1);
   }

   return EXIT_SUCCESS;
}