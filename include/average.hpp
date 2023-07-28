/**
* average.hpp
* Arralistleri ve listleri tek tek gezerek ortalamaları hesaplıyor ve en son total ortalamayı ekrana yazdırıyorum
* 1-B
* 1.Ödev
* 22.02.2023
* Furkan Geren / furkangeren2001@gmail.com
*/
#ifndef AVERAGE_HPP
#define AVERAGE_HPP

#include "arraylist.hpp"
#include "liste.hpp"

using namespace std;

class Average {
private:
    float ortalama;

public:

   
    Average();
    void ortalamaAl(ArrayList *upArray);
    int max(ArrayList *tempMax);
    bool check(Liste* temp);
    int checkHowMany(Liste* temp);
};




#endif