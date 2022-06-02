//
// Created by Razvan on 25.05.2022.
//

#ifndef TEMALAB14_DATAANIMALEXTRACTOR_H
#define TEMALAB14_DATAANIMALEXTRACTOR_H
#include <iostream>
#include <vector>
#include "../../Exercitul1/data_as_string_service/DataAsStringService.h"

using namespace std;
class DataAnimalExtractor {

    DataAsStringService dataAsStringService;

public:

    string extractName(string data) {
        vector<string> dataAsVector = dataAsStringService.splitDataBySemiColon(data);
        return dataAsVector[0];
    }

    int extractAge(string data) {
        vector<string> dataAsVector = dataAsStringService.splitDataBySemiColon(data);
        return stoi(dataAsVector[1]);
    }

    string extractRegistrationValue(string data) {
        vector<string> dataAsVector = dataAsStringService.splitDataBySemiColon(data);
        return dataAsVector[2];
    }

    string extractOwnerName(string data) {
        vector<string> dataAsVector = dataAsStringService.splitDataBySemiColon(data);
        return dataAsVector[3];
    }

};


#endif //TEMALAB14_DATAANIMALEXTRACTOR_H
