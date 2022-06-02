//
// Created by Razvan on 25.05.2022.
//

#ifndef TEMALAB14_LISTANIMALS_H
#define TEMALAB14_LISTANIMALS_H
#include <iostream>
using namespace std;
#include "vector"
#include "set"
#include "../animal/Animal.h"
#include "../data_extractor_animal_2/DataAnimalExtractor.h"

class ListAnimals {

    DataAnimalExtractor dataAnimalExtractor;

    vector<Animal> animale = vector<Animal>();

    vector<string> ownersEvidence = vector<string>();

    int animalsBornInAGivenYear(int year) {
        int k = 0;
        for (auto animal : this->animale) {
            if (animal.getAnulNasterii() == year) {
                k++;
            }
        }
        return k;
    }

    void displayOwnersAnimals(string owner) {
        for (auto animal : animale) {
            if (animal.getNumeStapan() == owner) {
                cout << animal.getNume() << " ";
            }
        }
        cout << endl;
    }

public:

    void addMember(string animalAsString) {
        this->animale.push_back( Animal(
                dataAnimalExtractor.extractName(animalAsString),
                dataAnimalExtractor.extractAge(animalAsString),
                dataAnimalExtractor.extractRegistrationValue(animalAsString),
                dataAnimalExtractor.extractOwnerName(animalAsString)
                        ));
    }

    void displayAll() {
        for (auto animal : animale) {
            animal.toString();
            cout << endl;
        }
    }

    void sortedAnimals() {
        sort(this->animale.begin(), this->animale.end(), [] (Animal animalOne, Animal animalTwo) {
            return animalOne.getNume() > animalOne.getNume() || animalOne.getAnulNasterii() > animalOne.getAnulNasterii();
        });
        this->displayAll();
    }

    void registeredAnimals() {
        int k = 0;
        for (auto animal : this->animale) {
            if (animal.isRegisterd() == "da") {
                k++;
            }
        }
        cout << k;
    }

    void statistic() {
        for (int i = 2000; i <= 2022; i++) {
            cout << i << "->" << this->animalsBornInAGivenYear(i) << endl;
        }
    }

    void longestNameOwner() {
        int maxi = 0;
        for (auto animal : this->animale) {
            if (animal.getNumeStapan().size() > maxi) {
                maxi = animal.getNumeStapan().size();
            }
        }

        for (auto animal : this->animale) {
            if (animal.getNumeStapan().size() == maxi) {
                cout << animal.getNume();
            }
        }
    }

    void diplayForEachOwnerAnimals() {
        set<string> owners = set<string>();
        for (auto animal : this->animale) {
            owners.insert(animal.getNumeStapan());
        }
        for (auto owner : owners) {
            cout << owner << "->";
            displayOwnersAnimals(owner);
        }
    }

};


#endif //TEMALAB14_LISTANIMALS_H
