//
// Created by Razvan on 24.05.2022.
//

#ifndef TEMALAB14_LISTAMASINI_H
#define TEMALAB14_LISTAMASINI_H


#include <map>
#include <set>
#include "../masina/Masina.h"
#include "../data_extractor_masina/DataExtractorMasina.h"

class ListaMasini {

    DataExtractorMasina dataExtractorMasina;

    vector<Masina> masini = vector<Masina>();

    int maxNumberOfOwners() {
        vector<int> numberOfOwnersList = vector<int>();
        for (auto masina : this->masini) {
            numberOfOwnersList.push_back(masina.getProprietari().size());
        }
        int max = -1;
        for (auto number : numberOfOwnersList) {
            if (number > max) {
                max = number;
            }
        }
        return max;
    }

    set<string> allOwners() {
        set<string> owners = set<string>();
        for (auto masina : this->masini) {
            for (auto proprietar : masina.getProprietari()) {
                owners.insert(proprietar.getNume());
            }
        }
        return owners;
    }


public:

    void addMasina(string masina) {
        this->masini.push_back(Masina(dataExtractorMasina.getNume(masina), dataExtractorMasina.getAn(masina), dataExtractorMasina.getListProprietari(masina)));
    }

    void displayAll() {
        for (auto masina : this->masini) {
            masina.toString();
            cout << endl;
        }
    }

    void carsWithTheMostOwners() {
        vector<string> cars = vector<string>();
        for (auto masina : this->masini) {
            if (masina.getProprietari().size() == this->maxNumberOfOwners()) {
                masina.toString();
                cout << endl;
            }
        }
    }

    void sortByKilometers() {
        sort(this->masini.begin(), this->masini.end(), [] (Masina masina1, Masina masina2) {
            return masina1.totalKilmoters() > masina2.totalKilmoters();
        });
        for (auto masina : masini) {
            masina.toString();
            cout << endl;
        }
    }

    void extractCarByName(string name) {
        for (auto car : masini) {
            if (car.getNume() == name) {
                car.toString();
                cout << endl;
            }
        }
    }

    void ownerSCars() {
        auto owners = this->allOwners();
        for (auto owner : owners) {
            cout << owner << " -> ";
            for (auto masina : masini) {
                for (auto proprietar : masina.getProprietari()) {
                    if (proprietar.getNume() == owner) {
                        cout << masina.getNume() << " ";
                    }
                }
            }
            cout << endl;
        }
    }

};


#endif //TEMALAB14_LISTAMASINI_H
