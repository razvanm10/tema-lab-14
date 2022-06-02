#include <iostream>
#include "Exercitul1/data_as_string_service/DataAsStringService.h"

#include "Exercitul1/lista_patinatori/List.h"
#include "Exercitiul3/masina/Masina.h"
#include "Exercitiul3/data_extractor/DataExtractorPropietar.h"
#include "Exercitiul3/data_extractor_masina/DataExtractorMasina.h"
#include "Exercitiul3/lista_masini/ListaMasini.h"
#include "Exercitiul2/list_animals/ListAnimals.h"

using namespace std;
int main() {

//    cout << "------------------------1 Start ------------------------------" << endl << endl;
//
//    auto person1 = "Marius Negrea; 22; comp1, comp2";
//    auto person2 = "Marius Dan; 20; comp3, comp4";
//    auto person3 = "Dan Negrea; 17; comp5, comp2";
//    auto person4 = "Mihai Badea; 12; comp6, comp2";
//    auto person5 = "Andrei Udiseanu; 29; comp7, comp9";
//    auto person6 = "Rares Lazea; 20; comp8, comp9, comp2";
//
//    List list;
//
//    list.addMember(person1);
//    list.addMember(person2);
//    list.addMember(person3);
//    list.addMember(person4);
//    list.addMember(person5);
//    list.addMember(person6);
//
//    list.displayMembersInAGivenAgeRange(10, 22); cout << endl;
//
//    list.displayDistictCompetitions();
//
//    list.displaySortedMembers();
//
//    cout << endl;
//
//    list.displayCompetitionsAndTheirMembers();
//
//    cout << endl;
//    cout << "------------------------1 End------------------------------" << endl << endl;
//
    cout << "------------------------3 Start------------------------------" << endl << endl;


    string masina1 = "Dacia Logan;2018;Georgescu Ion;1000;24;Vasilescu Mircea;5420007;56;Andrei Mircea;5427;56";
    string masina2 = "Renault;2008;Popescu Ion;1200;23;Pop Mircea;50027;26";
    string masina3 = "Golf;2000;Popescu Gabriel;1700;18;Badea Mircea;40027;10";
    string masina4 = "Dacia Logan;2005;Popescu Ioan;17000;30;Badea Mircea;10027;19;Pop Mircea;50027;26";

    ListaMasini listaMasini;

    listaMasini.addMasina(masina1);
    listaMasini.addMasina(masina2);
    listaMasini.addMasina(masina3);
    listaMasini.addMasina(masina4);

    cout << "--------------------" << endl;
    listaMasini.displayAll();

    cout << "--------------------" << endl;

    listaMasini.carsWithTheMostOwners();

    cout << "--------------------" << endl;

    listaMasini.sortByKilometers();

    cout << "--------------------" << endl;

    listaMasini.extractCarByName("Renault");

    cout << "--------------------" << endl;

    listaMasini.ownerSCars();

    cout << "------------------------3 Stop------------------------------" << endl << endl;

//    cout << "------------------------2 Start------------------------------" << endl << endl;
//
//    string animal1 = "Labus;2018;da;Popescu Ion Ion";
//    string animal2 = "Bobi;2012;nu;Matei Ion";
//    string animal3 = "Tara;2013;nu;Matei Dumitru Marcel";
//    string animal4 = "Bruno;2012;nu;Matei Ion";
//
//    ListAnimals listAnimals;
//
//    listAnimals.addMember(animal1);
//    listAnimals.addMember(animal2);
//    listAnimals.addMember(animal3);
//    listAnimals.addMember(animal4);
//
//    listAnimals.displayAll();
//
//    listAnimals.statistic();
//
//    cout << endl;
//    listAnimals.longestNameOwner();
//    cout << endl;
//
//    listAnimals.diplayForEachOwnerAnimals();
//
//    cout << "------------------------2 Stop------------------------------" << endl << endl;

    return 0;
}
