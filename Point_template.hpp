#include <stdio.h>
#pragma once

template<typename T>
class Point_template 
{
    private :
        T abscisse;
        T ordonnée;
    public :
        Point_template(T x, T y);
        Point_template(const Point_template<T>& a);
        ~Point_template();

        void translater(T a, T b);

        T get_abscisse();
        T get_ordonnee();
        void set_abscisse(T new_abscisse);
        void set_ordonnee(T new_ordonnee);
};

template <typename T>
Point_template<T>::Point_template(T x, T y){
    this->abscisse = x;
    this->ordonnee = y;
}

template <typename T>
Point_template<T>::Point_template(const Point_template<T>& a){
    this->x = a.x;
}


template <typename T>
void Point_template<T>::translater(T a, T b){
    this->abscisse += a;
    this->ordonnee += b; 
}

template <typename T>
T Point_template<T>::get_abscisse(){
    return this->abscisse;
}

template <typename T>
T Point_template<T>::get_ordonnee(){
    return this->ordonnee;
}

template <typename T>
void Point_template<T>::set_abscisse(T a){
    this->abscisse=a;
}

template <typename T>
void Point_template<T>::set_ordonnee(T b){
    this->ordonnee=b;
}