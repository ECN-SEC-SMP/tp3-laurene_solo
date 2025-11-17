#include <stdio.h>
#include <Point_template.h>
#pragma once

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




template <typename T>
Forme::Forme(){
    this->centre=centre;
}
