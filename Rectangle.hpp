#pragma once
#include "Forme.hpp"

template <typename T>
class Rectangle : public Forme<T>
{
    protected :
        double largeur;
        double hauteur;
    public :
        Rectangle(double h, double l);
        ~Rectangle();

        T perimetre() override;
        T surface() override;
        std::string type();
};

template <typename T>
Rectangle<T>::Rectangle(double h, double l){
    hauteur = h;
    largeur = l;
}

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


