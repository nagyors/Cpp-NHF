//
// Created by Ors on 2020. 05. 18..
//
#include <iostream>
#include <string>

#include "ember.h"
#include "lista.h"
//#include "memtrace.h"


Lista::Lista()
{
    meret=0;
    emberek = new Ember*[meret];
}

Lista::~Lista()
{
    for(int i = 0; i < meret; ++i)
        delete emberek[i];
    delete[] emberek;
}

void Lista::ujEmber(Ember* uj)
{
    for(int i = 0; i < meret; i++){
        if(uj->NevReturn() == emberek[i]->NevReturn()){
            std::cout << "Mar szerepel a kontaktok kozott\n";
            return;
        }
    }

    Ember** ujlista = new Ember*[meret + 1];
    if(meret != 0){
        for(int i=0; i<meret; i++)
            ujlista[i]=emberek[i];
    }
    ujlista[meret]=uj;
    meret++;
    delete[] emberek;
    emberek = ujlista;
    std::cout << "Muvelet sikeres\n";

}

void Lista::torol(std::string torolS)
{
    for(int i = 0 ; i < meret; i++){
        if(torolS == emberek[i]->NevReturn()) {
            delete emberek[i];
            meret -= 1;

            if (meret != 0) {
                Ember **uj = new Ember *[meret];
                if (i == 0) {
                    uj[0] = emberek[1];
                } else
                    for (int j = 0; j < i; j++)
                        uj[j] = emberek[j];
                for (int k = i; k < meret; k++)
                    uj[k] = emberek[k + 1];
                delete[] emberek;
                emberek=uj;
                std::cout << "Muvelet sikeres" << std::endl;
                return;
            } else {
                std::cout << "Muvelet sikeres" << std::endl;
                return;
            }
        }
    }
    std::cout << "Muvelet sikertelen" << std::endl;
}

void Lista::keres(std::string nev)
{
    for (int i=0; i<meret; i++)
    {
        if(nev == emberek[i]->NevReturn()){
            std::cout << i+1 << ". ";
            emberek[i]->kiir();
            return;
        }
    }
    std::cout << "Muvelet sikertelen. Nincs ilyen kontakt.\n";
}

void Lista::kiir(){
    if(meret == 0)
        std::cout<<"Muvelet sikertelen. Nincs bejegyzett kontakt."<< std::endl;
    else{
        for(int i=0;i<meret;i++){
            std::cout<<i+1<<".: ";
            emberek[i]->kiir();
        }
    }
}

