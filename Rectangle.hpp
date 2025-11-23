#pragma once
#include "Forme.hpp"

template <typename T>
class Rectangle : public Forme<T>
{
    private :
        double largeur;
        double hauteur;
    public :
        Rectangle();
        ~Rectangle();

        T perimetre() override;
        T surface() override;
        std::string type();
};

template <typename T>
Rectangle<T>::Rectangle(){}

template <typename T>
Rectangle<T>::~Rectangle(){}

template <typename T>
T Rectangle<T>::perimetre() {
    return 2*largeur + 2*hauteur;
}

template <typename T>
T Rectangle<T>::surface() {
    return hauteur*largeur;
}

template <typename T>
std::string Rectangle<T>::type(){
    return "Rectangle";
}

template <typename T>
std::ostream& operator<<(std::ostream &o, Rectangle<T> const &R) {
    o<<"type : "<<R.type()<<" | hauteur : "<<R.hauteur<<" | largeur : "<<R.largeur<<std::endl;
    return o;
}


