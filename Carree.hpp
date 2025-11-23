#pragma once
#include "Rectangle.hpp"

template <typename T>
class Carree : public Rectangle<T>
{
    private :

    public : 
        Carree();
        ~Carree();
        std::string type();
};

template <typename T>
Carree<T>::Carree(){}

template <typename T>
Carree<T>::~Carree(){}

template <typename T>
std::string Carree<T>::type(){
    return "Carrée";
}

template <typename T>
std::ostream& operator<<(std::ostream &o, Carree<T> const &R) {
    o<<"type : "<<R.type()<<" | hauteur : "<<R.hauteur<<" | largeur : "<<R.largeur<<std::endl;
    return o;
}