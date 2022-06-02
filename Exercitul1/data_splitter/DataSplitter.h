//
// Created by Razvan on 24.05.2022.
//

#ifndef TEMALAB14_DATASPLITTER_H
#define TEMALAB14_DATASPLITTER_H

#include <iostream>
#include "../data_as_string_service/DataAsStringService.h"

using namespace std;
class DataSplitter {

    DataAsStringService dataAsStringService;

public:

    string splitCompetitions(string competitions) {
        std::string::iterator end_pos = std::remove(competitions.begin(), competitions.end(), ' ');
        competitions.erase(end_pos, competitions.end());
        return competitions;

    }

    vector<string> dataSplittedBySemiColon(string stringData) {
        return dataAsStringService.splitDataBySemiColon(stringData);
    }

    vector<string> getSplittedCompetitions(string data) {
        auto dataAsVector = dataAsStringService.splitDataBySemiColon(data);
        auto competitionsAsStringWithoutSpaces = splitCompetitions(dataAsVector[dataAsVector.size() - 1]);
        return dataAsStringService.splitDataByComma(competitionsAsStringWithoutSpaces);
    }

};


#endif //TEMALAB14_DATASPLITTER_H
