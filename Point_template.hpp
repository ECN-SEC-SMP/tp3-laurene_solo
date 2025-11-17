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
        Point_template(const T& a);
        ~Point_template();

        T translater(T a, T b);

        T get_abscisse();
        T get_ordonnee();
        void set_abscisse(T new_abscisse);
        void set_ordonnee(T new_ordonnee);
};