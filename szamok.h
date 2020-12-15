//
// Created by Ors on 2020. 05. 18..
//

#ifndef NHF_2_SZAMOK_H
#define NHF_2_SZAMOK_H
#include "ember.h"
//#include "memtrace.h"

class Szamok : public Ember
{
public:
    std::string pSz; //privat szam
    std::string mSz; //munkahelyi szam
public:
    Szamok(std::string Nev, std::string privat, std::string munkahely) : Ember(Nev) , pSz(privat) , mSz(munkahely) {}
    Szamok();
    virtual ~Szamok();
    virtual void kiir();

};

#endif //NHF_2_SZAMOK_H
