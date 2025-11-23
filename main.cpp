#include <iostream>
#include "Forme.hpp"
#include "Point_template.hpp"
#include "Rectangle.hpp"
#include "Carre.hpp"
#include "listeFormes.hpp"

int main(){
    // Partie 3 :
    Rectangle<double> R(5, 2);
    std::cout<<"Type : "<<R.type()<<"\nPerimètre : "<<R.perimetre()<<"\nSurface : "<<R.surface()<<std::endl;
    
    Carre<double> C(5);
    std::cout<<"Type : "<<C.type()<<"\nPerimètre : "<<C.perimetre()<<"\nSurface : "<<C.surface()<<std::endl;
    // Partie 5 :
    listeFormes<double> liste_forme;
    liste_forme.set_listeFormes(&R); // ajout d'un rectangle
    liste_forme.set_listeFormes(&C); // ajout d'un carré
    //std::cout<<"Liste de formes : \n"<<liste_forme<<"\n Surface totale des formes : "<<liste_forme.surfaceTotale()<<std::endl;
    return 0;
}