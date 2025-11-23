#pragma once
#include "Rectangle.hpp"

template <typename T>
class Carre : public Rectangle<T>
{
    private :

    public : 
        Carre(double cote);
        ~Carre();
        std::string type();
};

template <typename T>
Carre<T>::Carre(double cote) : Rectangle<T>(cote, cote) {}

template <typename T>
Carre<T>::~Carre(){}

template <typename T>
std::string Carre<T>::type(){
    return "Carré";
}

template <typename T>
std::ostream& operator<<(std::ostream &o, Carre<T> const &R) {
    o<<"type : "<<R.type()<<" | hauteur : "<<R.hauteur<<" | largeur : "<<R.largeur<<std::endl;
    return o;
}