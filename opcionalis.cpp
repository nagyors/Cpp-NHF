//
// Created by Ors on 2020. 05. 18..
//
#include <iostream>
#include <string>

#include "opcionalis.h"
//#include "memtrace.h"

Opcio::Opcio(){

}

Opcio::~Opcio(){

}

void Opcio::kiir(){
    std::cout<<"Nev:"<< Ember::NevReturn() << std::endl;

    if(becenev != "0"){
        std::cout<<"Becenev: " << becenev << std::endl;
    }
    if(cim != "0"){
        std::cout<<"Cim: " << cim << std::endl;
    }

    if(privat != "0"){
        std::cout<<"Privat szam: "<< privat << std::endl;
    }
    if(munkahelyi != "0"){
        std::cout<<"Munkahelyi szam: "<< munkahelyi << std::endl;
    }
}

