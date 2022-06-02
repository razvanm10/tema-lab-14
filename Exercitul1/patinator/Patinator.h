//
// Created by Razvan on 22.05.2022.
//

#ifndef TEMALAB14_PATINATOR_H
#define TEMALAB14_PATINATOR_H
#include <iostream>
#include <vector>

using namespace std;

class Patinator {

    string firstName;

    string lastName;

    int age;

    vector<string> competitions;

    void displayCompetitons() {
        for_each(this->competitions.begin(), this->competitions.end(), [](string competitie){  cout << competitie << " "; });
    }

public:

    Patinator(string firstName, string lastName, int age, vector<string> competitions) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
        this->competitions = competitions;
    }

    string getFirstName() {
        return this->firstName;
    }

    string getLastName() {
        return this->lastName;
    }

    int getAge() {
        return this->age;
    }

    vector<string> getCompetitions() {
        return this->competitions;
    }

    void toString() {
        cout << this->firstName + " " + this->lastName + " " + to_string(this->age) + " [ ";
        this->displayCompetitons();
        cout << "]";
    }

};


#endif //TEMALAB14_PATINATOR_H
