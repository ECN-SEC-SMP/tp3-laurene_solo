#pragma once
#include <stdio.h>
#include "Forme.hpp"
#include <vector>

template <typename T>
class listeFormes 
{
    private :
        std::vector<Forme<T>*> listeFormes;
    public :
        // Setter :
        void set_listeFormes(Forme<T>* newforme);
        // Getter :
        Forme<T>* get_forme(int i);
        // Calcul de la surface totale :
        double surfaceTotale();
        
        // pas sur... ça marche pas
        //std::ostream& operator<<(std::ostream &o, const listeFormes<T> &l);

};

// Setter :
template <typename T>
void listeFormes<T>::set_listeFormes(Forme<T>* newforme){
    listeFormes.push_back(newforme);
}

// Accesseur :
template <typename T>
Forme<T>* listeFormes<T>::get_forme(int i){
    return listeFormes[i];
}

// calcul du surface totale des formes dans la liste :
template <typename T>
double listeFormes<T>::surfaceTotale(){
    double Stot;
    for(Forme<T>* forme : listeFormes){
        Stot += forme->surface();
    }
    return Stot;
}

// template <typename T>
// std::ostream& operator<<(std::ostream &o, listeFormes<T> const &l) {
//     for(Forme<T>* f : l.listeFormes){
//         o << " - " << *f<<"\n";   // on dereference pour utiliser operator<< de Forme
//     }
//     return o;
// }
