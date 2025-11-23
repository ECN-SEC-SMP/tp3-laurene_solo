#include "Forme.hpp"
#include "Point_template.hpp"
#include "Rectangle.hpp"
#include "Carree.hpp"

int main(){
    // Partie 3 :
    Rectangle<double> R;
    std::cout<<"Type : "<<R.type()<<"\nPerimètre : "<<R.perimetre()<<"\nSurface : "<<R.surface()<<std::endl;
    
    Carree<double> C;
    std::cout<<"Type : "<<C.type()<<"\nPerimètre : "<<C.perimetre()<<"\nSurface : "<<C.surface()<<std::endl;

    return 0;
}