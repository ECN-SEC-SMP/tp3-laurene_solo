#pragma once
#include <stdio.h>
#include "Forme.hpp"
#include <vector>

template <typename T>
class listeFormes : public Forme<T>
{
    private :
        vector<Forme<T>*> listeFormes;
    public :
        void set_listeFormes(Forme<T> newforme);
        Forme<T>* get_forme(int i);
};

template <typename T>
void listeFormes<T>::set_listeFormes(Forme<T> newforme){
    listeFormes.push_back(newforme);
}

template <typename T>
Forme<T>* listeFormes<T>::get_forme(int i){
    return listeFormes.at(i);
}
