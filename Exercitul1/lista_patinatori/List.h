//
// Created by Razvan on 24.05.2022.
//

#ifndef TEMALAB14_LIST_H
#define TEMALAB14_LIST_H

#include "../patinator/Patinator.h"
#include "../data_extractor/DataExtractor.h"

#include <set>

class List {

    vector<Patinator> patinatori;

    DataExtractorAnimal dataExtractor;

    set<string> setOfCompetitons() {
        set<string> distinctCompetitions = set<string>();
        for (auto patinator: this->patinatori) {
            for (auto competition: patinator.getCompetitions()) {
                distinctCompetitions.insert(competition);
            }
        }
        return distinctCompetitions;
    }

    void membersOfASpecifiedCompetitions(string givenCompetition) {
        for (Patinator patinator : this->patinatori) {
            for (auto competition : patinator.getCompetitions()) {
                if (competition == givenCompetition) {
                    cout << patinator.getFirstName() << " " << patinator.getLastName() << endl;
                }
            }
        }
    }

public:

    void addMember(string patinatorAsString) {

        Patinator patinator =  Patinator (
                    dataExtractor.extractFirstName(patinatorAsString),
                    dataExtractor.extractLastName(patinatorAsString),
                    dataExtractor.extractAge(patinatorAsString),
                    dataExtractor.extractListOfCompetitions(patinatorAsString) );

        this->patinatori.push_back(patinator);
    }

    void displayAllMembers() {
        std::for_each(this->patinatori.begin(), this->patinatori.end(),[] (Patinator patinator){
            patinator.toString();
            cout << endl;
        });
    }

    void displayMembersInAGivenAgeRange(int start, int stop) {
        for (auto patinator : this->patinatori) {
            if (patinator.getAge() > start && patinator.getAge() < stop) {
                patinator.toString();
                cout << endl;
            }
        }
    }

    void displayDistictCompetitions() {
        auto distinctCompetitions = this->setOfCompetitons();
        std::for_each(distinctCompetitions.begin(), distinctCompetitions.end(), [] (string competition) {
            cout << competition << endl;
        });
    }

    void displaySortedMembers() {
        sort(this->patinatori.begin(), this->patinatori.end(), [](Patinator patinator1, Patinator patinator2) {
            return patinator1.getAge() < patinator2.getAge() || patinator1.getCompetitions().size() < patinator2.getCompetitions().size();
        });
//        sort(this->patinatori.begin(), this->patinatori.end(), [](Patinator patinator1, Patinator patinator2) {
//            return  ;
//        });
        cout << endl;
        this->displayAllMembers();
        cout << endl;
    }

    void displayCompetitionsAndTheirMembers() {
        auto distinctCompetitions = this->setOfCompetitons();
        for (auto competition : distinctCompetitions) {
            cout << " -> " <<  competition << " <- " << endl;
            membersOfASpecifiedCompetitions(competition);
        }

    }

};


#endif //TEMALAB14_LIST_H
