//
// Created by Razvan on 24.05.2022.
//

#ifndef TEMALAB14_DATAEXTRACTORMASINA_H
#define TEMALAB14_DATAEXTRACTORMASINA_H
#include <iostream>
#include "../../Exercitul1/data_as_string_service/DataAsStringService.h"
#include "../Proprietar/Proprietar.h"
#include "../data_extractor/DataExtractorPropietar.h"

using namespace std;
class DataExtractorMasina {

    DataAsStringService dataAsStringService;

    DataExtractorPropietar dataExtractorPropietar;

    string refactorListProprietari(string data) {
        vector<string> dataAsVector = dataAsStringService.splitDataBySemiColon(data);
        vector<string> dataWithoutFirstTwo = vector<string>();
        string newStringData;
        for (int i = 2; i < dataAsVector.size(); i++) {
            dataWithoutFirstTwo.push_back(dataAsVector[i]);
        }
        cout << endl;
        for (int i = 0; i < dataWithoutFirstTwo.size(); i++) {
            if ((i+1) % 3 == 0) {
                newStringData += dataWithoutFirstTwo[i] + ";";
            } else {
                newStringData += dataWithoutFirstTwo[i] + ",";
            }
        }
        return newStringData;
    }

public:

    string getNume(string data) {
        vector<string> dataAsVector = dataAsStringService.splitDataBySemiColon(data);
        return dataAsVector[0];
    }

    int getAn(string data) {
        vector<string> dataAsVector = dataAsStringService.splitDataBySemiColon(data);
        return stoi(dataAsVector[1]);
    }

    vector<Proprietar> getListProprietari(string data) {
        vector<string> proprietariAsString = dataAsStringService.splitDataBySemiColon(refactorListProprietari(data));
        vector<Proprietar> proprietari = vector<Proprietar>();
        for (auto el : proprietariAsString) {
            proprietari.emplace_back(
                                    dataExtractorPropietar.extractName(el),
                                    dataExtractorPropietar.extractKilometri(el),
                                    dataExtractorPropietar.extractLuni(el)
                               );
        }
        return proprietari;
    };

};


#endif //TEMALAB14_DATAEXTRACTORMASINA_H
