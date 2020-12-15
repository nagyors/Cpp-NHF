//
// Created by Ors on 2020. 05. 18..
//

#ifndef NHF_2_EMBER_H
#define NHF_2_EMBER_H

#include <iostream>
#include <string>
//#include "memtrace.h"

class Ember
{
public:
    std::string nev;
public:
    Ember()= default;
    explicit Ember(std::string uNev) : nev(uNev) {}

    virtual void kiir()=0;
    std::string NevReturn();
    virtual ~Ember();
};

#endif //NHF_2_EMBER_H
