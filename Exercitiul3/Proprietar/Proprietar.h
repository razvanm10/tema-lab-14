//
// Created by Razvan on 24.05.2022.
//

#ifndef TEMALAB14_PROPRIETAR_H
#define TEMALAB14_PROPRIETAR_H
#include <iostream>

using namespace std;

class Proprietar {

    string nume;

    int kilometri;

    int luni;

public:

    Proprietar(string nume, int kilometri, int luni) {
        this->nume = nume;
        this->kilometri = kilometri;
        this->luni = luni;
    }

    string getNume() {
        return this->nume;
    }

    int getKilometri() {
        return this->kilometri;
    }

    int getLuni() {
        return this->luni;
    }

    void toString() {
        cout << this->nume + " " + to_string(kilometri) + " " + to_string(luni);
    }

};


#endif //TEMALAB14_PROPRIETAR_H
