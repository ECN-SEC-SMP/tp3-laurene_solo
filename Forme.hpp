#pragma once
#include "Point_template.hpp"

template <typename Tforme>
class Forme;

template <typename Tforme>
std::ostream& operator<<(std::ostream &o, Forme<Tforme> const &R);

template <typename Tforme>
class Forme
{
    private :
        Point_template<Tforme> centre;

    public :
        // constructeur :
        Forme();
        // destructeur ::
        ~Forme();
        // méthodes abstraites :
        virtual Tforme perimetre() = 0;
        virtual Tforme surface() = 0;
        // getter :
        Point_template<Tforme> getCentre();
};

// Constructeur :
template <typename Tforme>
Forme<Tforme>::Forme(){
    this->centre=centre;
}

// Destructeur :
template <typename Tforme>
Forme<Tforme>::~Forme(){}

// Surcharge d'opérateur << :
template <typename Tforme>
std::ostream& operator<<(std::ostream &o, Forme<Tforme> const &R) {
    o<<R.centre<<std::endl;
    return o;
}

// Accesseur :
template <typename Tforme>
Point_template<Tforme> Forme<Tforme>::getCentre() { 
    return centre; 
}

