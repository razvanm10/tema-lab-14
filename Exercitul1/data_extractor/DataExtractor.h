//
// Created by Razvan on 23.05.2022.
//

#ifndef TEMALAB14_DATAEXTRACTORANIMAL_H
#define TEMALAB14_DATAEXTRACTOR_H


#include "../data_as_string_service/DataAsStringService.h"
#include "../data_splitter/DataSplitter.h"

class DataExtractorAnimal {

    DataAsStringService dataAsStringService;

    DataSplitter dataSplitter;

public:

    string extractFirstName(string data) {
        auto dataAsVector = dataSplitter.dataSplittedBySemiColon(data);
        auto splittedName =  dataAsStringService.splitDataBySpace(dataAsVector[dataAsVector.size() - 3]);
        return splittedName[0];
    }

    string extractLastName(string data) {
        auto dataAsVector = dataSplitter.dataSplittedBySemiColon(data);
        auto splittedName =  dataAsStringService.splitDataBySpace(dataAsVector[dataAsVector.size() - 3]);
        return splittedName[1];
    }

    int extractAge(string data) {
        auto dataAsVector = dataSplitter.dataSplittedBySemiColon(data);
        auto ageAsString = dataAsVector[1];
        std::string::iterator end_pos = std::remove(ageAsString.begin(), ageAsString.end(), ' ');
        ageAsString.erase(end_pos, ageAsString.end());
        return stoi(ageAsString);
    }

    vector<string> extractListOfCompetitions(string data) {
        auto dataAsVector = dataAsStringService.splitDataBySemiColon(data);
        auto competitionsAsString = dataAsVector[2];
        return dataAsStringService.splitDataByComma(dataSplitter.splitCompetitions(competitionsAsString));
    }

};


#endif //TEMALAB14_DATAEXTRACTORANIMAL_H
