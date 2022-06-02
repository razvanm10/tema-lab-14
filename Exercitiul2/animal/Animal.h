//
// Created by Razvan on 25.05.2022.
//

#ifndef TEMALAB14_ANIMAL_H
#define TEMALAB14_ANIMAL_H
#include <iostream>
using namespace std;
class Animal {
//"Labus;2018;da;Popescu Ion".
    string nume;

    int anulNasterii;

    string registerd;

    string numeStapan;

public:

    Animal(string nume, int anulNasterii, string registered, string numeStapan) {
        this->nume = nume;
        this->anulNasterii = anulNasterii;
        this->registerd = registered;
        this->numeStapan = numeStapan;
    }

    string getNume() {
        return this->nume;
    }

    int getAnulNasterii() {
        return this->anulNasterii;
    }

    string isRegisterd() {
        return this->registerd;
    }

    string getNumeStapan() {
        return this->numeStapan;
    }

    void toString() {
        cout << this->nume + " " + to_string(this->anulNasterii) + " " + this->registerd + " " + this->numeStapan;
    }

};


#endif //TEMALAB14_ANIMAL_H
