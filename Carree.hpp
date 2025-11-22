#pragma once
#include <stdio.h>
#include "Rectangle.hpp"

template <typename Tcarree>
class Carree : public Rectangle
{
    private :

    public : 
        Carree();
        ~Carree();
        void cote_aligne() override;

}