//
// Created by Razvan on 24.05.2022.
//

#ifndef TEMALAB14_DATAEXTRACTORPROPIETAR_H
#define TEMALAB14_DATAEXTRACTORPROPIETAR_H
#include <iostream>
#include "../../Exercitul1/data_as_string_service/DataAsStringService.h"

using namespace std;
class DataExtractorPropietar {

    DataAsStringService dataAsStringService;

public:

    string extractName(string data) {
        vector<string> dataAsVector = dataAsStringService.splitDataByComma(data);
        return dataAsVector[0];
    }

    int extractKilometri(string data) {
        vector<string> dataAsVector = dataAsStringService.splitDataByComma(data);
        return stoi(dataAsVector[1]);
    }

    int extractLuni(string data) {
        vector<string> dataAsVector = dataAsStringService.splitDataByComma(data);
        return stoi(dataAsVector[2]);
    }

};


#endif //TEMALAB14_DATAEXTRACTORPROPIETAR_H
