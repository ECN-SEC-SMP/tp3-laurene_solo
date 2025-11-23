#pragma once
#include <stdio.h>
#include <iostream>

template<typename T>
class Point_template 
{
    private :
        T abscisse;
        T ordonnee;
    public :
        // Constructeurs :
        Point_template();
        Point_template(T x, T y);
        Point_template(const Point_template<T>& a); // constructeur de copie
        // Destructeur :
        ~Point_template();
        // Fonction translater :
        void translater(T a, T b);
        // Accesseurs :
        T get_abscisse();
        T get_ordonnee();
        // Mutateurs :
        void set_abscisse(T new_abscisse);
        void set_ordonnee(T new_ordonnee);
};

// Constructeur :
template <typename T>
Point_template<T>::Point_template(){}

template <typename T>
Point_template<T>::Point_template(T x, T y){
    this->abscisse = x;
    this->ordonnee = y;
}
// constructeur de copie
template <typename T>
Point_template<T>::Point_template(const Point_template<T>& a){
    this->x = a.x;
}

// Destructeur :
template <typename T>
Point_template<T>::~Point_template(){}

// Accesseurs :
template <typename T>
T Point_template<T>::get_abscisse(){
    return this->abscisse;
}

template <typename T>
T Point_template<T>::get_ordonnee(){
    return this->ordonnee;
}

// Mutateurs :
template <typename T>
void Point_template<T>::set_abscisse(T a){
    this->abscisse=a;
}

template <typename T>
void Point_template<T>::set_ordonnee(T b){
    this->ordonnee=b;
}

// Fonction translater :
template <typename T>
void Point_template<T>::translater(T a, T b){
    this->abscisse += a;
    this->ordonnee += b; 
}

// Surcharge d'opérateur :
template <typename T>
std::ostream& operator<<(std::ostream &o, Point_template<T> const &R) {
    o<<"L'abscisse : "<<R.abscisse<<"et l'ordonnée : " <<R.ordonnee<<std::endl;
    return o;
}

// Partie 4 : Spécification de la fonction translater
template <>
void Point_template<std::string>::translater(std::string a, std::string b){
    std::swap(this->abscisse, this->ordonnee);
}
