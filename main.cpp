#include <iostream>
#include <string>

#include "ember.h"
#include "lista.h"
#include "szamok.h"
#include "opcionalis.h"
//#include "memtrace.h"

void menu (void)
{
    std::cout << "Telefonkonyv\n";
    std::cout << "1.Uj kontakt\n";
    std::cout << "2.Kontakt torlese\n";
    std::cout << "3.Osszes listazasa\n";
    std::cout << "4.Kereses\n";
    std::cout << "9.Kilepes\n";
    return;
}


int main()
{
    Lista emberek;
    menu();
    std::string m;
    std::getline(std::cin,m);
    while(1){
        if(m != "1" && m != "2" && m != "3" && m != "4" && m != "9"){
            std::cout<<"Rossz bemenet."<<std::endl;
            std::getline(std::cin,m);
        }
        else {
            switch (m[0]) {
                case 49: /// kontakt hozzadas
                {
                    std::cout << "Ha valamit nem akar megadni irjon 0-at\n";

                    std::string ujN, ujB, ujP, ujM, ujC;
                    std::cout << "Nev:";
                    std::getline(std::cin, ujN);

                    bool opcio = true;
                    std::string temp, temp2;
                    std::cout << "Becenev:";
                    //std::cin>>temp;
                    std::getline(std::cin, temp);
                    if (temp == "0")
                        opcio = false;
                    else
                        ujB = temp;

                    std::cout << "Privat szam:";
                    std::getline(std::cin, ujP);;
                    std::cout << "Munkahelyi szam:";
                    std::getline(std::cin, ujM);;

                    std::cout << "Cim:";
                    std::getline(std::cin, temp2);;
                    if (temp2 != "0") {
                        opcio = true;
                        ujC = temp2;
                    }

                    if (!opcio)
                        emberek.ujEmber(new Szamok(ujN, ujP, ujM));
                    else
                        emberek.ujEmber(new Opcio(ujN, ujB, ujC, ujP, ujM));

                    std::cout << "\nVEGE";
                    break;
                }
                case 50: /// kontakt torles
                {
                    std::cout << "Kit akar kitorolni?";
                    std::string temp;
                    std::getline(std::cin, temp);

                    emberek.torol(temp);
                    break;
                }
                case 51: /// listazas
                    emberek.kiir();
                    break;
                case 52: /// kereses
                {
                    std::cout << "Kire akar rakeresni?";
                    std::string temp;
                    std::getline(std::cin, temp);

                    emberek.keres(temp);
                    break;
                }
                case 57:
                    return 0;
                default:
                    std::cout << "Rossz bemenet.";
                    break;
            }
            std::getline(std::cin,m);
        }


    }
    return 0;
}
