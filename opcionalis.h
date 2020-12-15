//
// Created by Ors on 2020. 05. 18..
//

#ifndef NHF_2_OPCIONALIS_H
#define NHF_2_OPCIONALIS_H
#include "ember.h"
//#include "memtrace.h"

class Opcio : public Ember
{
public:
    std::string becenev;
    std::string cim;
    std::string privat; //privat szam
    std::string munkahelyi; //munkahelyi szam
public:
    Opcio();
    Opcio(std::string Nev, std::string B, std::string C, std::string P, std::string M) : Ember(Nev),becenev(B),cim(C),privat(P),munkahelyi(M) {}
    virtual ~Opcio();
    virtual void kiir();
};
#endif //NHF_2_OPCIONALIS_H
