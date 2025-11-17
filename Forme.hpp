#pragma once

#include <stdio.h>
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
        Forme();
        Tforme perimetre();
        Tforme surface();
};


template <typename Tforme>
Forme<Tforme>::Forme(){
    this->centre=centre;
}

template <typename Tforme>
std::ostream& operator<<(std::ostream &o, Forme<Tforme> const &R) {
    o<<R.centre<<std::endl;
    return o;
}
