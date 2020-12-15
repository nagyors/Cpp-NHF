//
// Created by Ors on 2020. 05. 18..
//

#ifndef NHF_2_LISTA_H
#define NHF_2_LISTA_H

#include "ember.h"
//#include "memtrace.h"

class Lista
{
public:
    Ember** emberek;
    int meret;
public:
    Lista();
    ~Lista();

    void kiir();
    void ujEmber(Ember* uj);
    void torol(std::string torolS);
    void keres(std::string nev);

};

#endif //NHF_2_LISTA_H
