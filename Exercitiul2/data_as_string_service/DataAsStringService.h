//
// Created by Razvan on 25.05.2022.
//

#ifndef TEMALAB14_DATAASSTRINGSERVICE_H
#define TEMALAB14_DATAASSTRINGSERVICE_H
#include <iostream>
#include "vector"
#include <sstream>
using namespace std;
class DataAsStringService {

public:

    vector<string> splitDataBySemiColon(string data) {
        auto streamedData = stringstream (data);
        vector<string> vectorOfStrings = vector<string>();
        string word;
        while (getline(streamedData,word,';')) {
            vectorOfStrings.push_back(word);
        }
        return vectorOfStrings;
    }

};


#endif //TEMALAB14_DATAASSTRINGSERVICE_H
