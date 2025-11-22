#pragma once
#include <stdio.h>
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

