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

    return 0;
}