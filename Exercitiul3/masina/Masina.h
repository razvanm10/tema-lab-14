//
// Created by Razvan on 24.05.2022.
//

#ifndef TEMALAB14_MASINA_H
#define TEMALAB14_MASINA_H

#include <iostream>
#include "../Proprietar/Proprietar.h"
#include "vector"

using namespace std;

class Masina {
//"Dacia Logan;2018;Popescu Ion;1000;24;Vasilescu Mircea;5427;56"

    string numeMasina;

    int an;

    vector<Proprietar> proprietari;


public:

    Masina(string nume, int an, vector<Proprietar> proprietari) {
        this->numeMasina = nume;
        this->an = an;
        this->proprietari = proprietari;
    }

    string getNume() {
        return this->numeMasina;
    }

    int getAn() {
        return this->an;
    }

    vector<Proprietar> getProprietari() {
        return this->proprietari;
    }

    int totalKilmoters() {
        int sum = 0;
        for (auto proprietar : this->proprietari) {
            sum += proprietar.getKilometri();
        }
        return sum;
    }

    void toString() {
        cout << this->numeMasina + " " + to_string(this->an) + " [ ";
        for_each(this->proprietari.begin(), this->proprietari.end(), [] (Proprietar proprietar) {
            proprietar.toString(); cout << ", "; });
        cout << "]";
    }

};


#endif //TEMALAB14_MASINA_H
