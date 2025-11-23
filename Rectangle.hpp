#pragma once
#include "Forme.hpp"

template <typename T>
class Rectangle : public Forme<T>
{
    protected :
        double largeur;
        double hauteur;
    public :
        // Constructeur :
        Rectangle(double h, double l);
        // Destructeur :
        ~Rectangle();

        // Réecriture des fonctions hérités :
        T perimetre() override;
        T surface() override;
        // Fonction qui renvoit le type de la forme (ici rectangle):
        std::string type();

        // gatters :
        double getLargeur();
        double getHauteur();
};

// Constructeur :
template <typename T>
Rectangle<T>::Rectangle(double h, double l){
    hauteur = h;
    largeur = l;
}

// Destructeur :
template <typename T>
Rectangle<T>::~Rectangle(){}

// Ecriture de la fonction périmètre hérité :
template <typename T>
T Rectangle<T>::perimetre() {
    return 2*largeur + 2*hauteur;
}

// Ecriture de la fonction périmètre hérité :
template <typename T>
T Rectangle<T>::surface() {
    return hauteur*largeur;
}

// Fonction qui renvoit "Rectangle"
template <typename T>
std::string Rectangle<T>::type(){
    return "Rectangle";
}

// Surcharge d'opérateur :
template <typename T>
std::ostream& operator<<(std::ostream &o, Rectangle<T> const &R) {
    o<<"type : "<<R.type()<<" | hauteur : "<<R.hauteur<<" | largeur : "<<R.largeur<<std::endl;
    return o;
}

// ajout des getters :
template <typename T>
double Rectangle<T>::getLargeur() { 
    return largeur; 
}

template <typename T>
double Rectangle<T>::getHauteur() { 
    return hauteur; 
}



