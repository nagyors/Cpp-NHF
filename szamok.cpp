#include <iostream>
#include <string>

#include "szamok.h"
//#include "memtrace.h"

Szamok::Szamok(){

}

Szamok::~Szamok(){

}

void Szamok::kiir()
{
    std::cout<<"Nev:"<< Ember::NevReturn() << std::endl;
    if(pSz != "0"){
        std::cout<<"Privat szam: "<< pSz << std::endl;
        return;
    }
    if(mSz != "0"){
        std::cout<<"Munkahelyi szam: "<< mSz << std::endl;
        return;
    }
}

//
// Created by Ors on 2020. 05. 18..
//

