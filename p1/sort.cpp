#include <algorithm>
#include "person.h"
#include "variables.h"

using namespace std;

void sortNAME(QString& text_person, QString& order)
{
    char choice;
    bool valid = false;

    cout << "In which order would you like to output the table: " << endl;
    cout << "------------------------------------------------" << endl;
    cout << "[1] Oldest data to newest" << endl;
    cout << "[2] Alphabetical" << endl;
    cout << "[3] Reverse alphabetical" << endl;
    cout << "[4] Year of birth" << endl;
    cout << "[5] Year of death" << endl;

    do{
        inputchoice(choice);
        if(choice == '1'){
            text_person += order;
        }
        else if(choice == '2'){
            order = " ORDER BY name COLLATE NOCASE ASC;";
            text_person += order;
        }
        else if(choice == '3'){
            order = " ORDER BY name COLLATE NOCASE DESC;";
            text_person += order;
        }
        else if(choice == '4'){
            order = " ORDER BY year_birth, name COLLATE NOCASE ASC;";
            text_person += order;
        }
        else if(choice == '5'){
            order = " ORDER BY year_death, name COLLATE NOCASE ASC;";
            text_person += order;
        }
        else{
            cout << "Input is not valid! Please choose again" << endl;
            valid = true;
        }
    }while(valid);
}

void sortCOMPUTER(QString& text_computer, QString& order)
{
    char choice;
    bool valid = false;

    cout << "In which order would you like to output the table: " << endl;
    cout << "------------------------------------------------" << endl;
    cout << "[1] Oldest data to newest" << endl;
    cout << "[2] Alphabetical by name" << endl;
    cout << "[3] Reverse alphabetical by name" << endl;
    cout << "[4] Year of creation" << endl;
    cout << "[5] Was built or not" << endl;
    cout << "[6] Alphabetical by type" << endl;

    do{
        inputchoice(choice);
        if(choice == '1'){
            text_computer += order;
        }
        else if(choice == '2'){
            order = " ORDER BY name COLLATE NOCASE ASC;";
            text_computer += order;
        }
        else if(choice == '3'){
            order = " ORDER BY name COLLATE NOCASE DESC;";
            text_computer += order;
        }
        else if(choice == '4'){
            order = " ORDER BY year_creation, name COLLATE NOCASE ASC;";
            text_computer += order;
        }
        else if(choice == '5'){
            order = " ORDER BY was_built, name COLLATE NOCASE ASC;";
            text_computer += order;
        }
        else if(choice == '6'){
            order = " ORDER BY type, name COLLATE NOCASE ASC;";
            text_computer += order;
        }
        else{
            cout << "Input is not valid! Please choose again" << endl;
            valid = true;
        }
    }while(valid);
}

void sortCONNECTION(QString& text_connection, QString& order)
{
    char choice;
    bool valid = false;

    cout << "In which order would you like to output the table: " << endl;
    cout << "------------------------------------------------" << endl;
    cout << "[1] Oldest data to newest" << endl;
   // cout << "[2] In alphabetical order by person's name" << endl;
   // cout << "[3] In reverse alphabetical order by person's name" << endl;

    do{
        inputchoice(choice);
        if(choice == '1'){
            text_connection += order;
            valid = false;
        }
        //VIRKAR EKKI AD FLOKKA FYRIR BAEDI!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        /*else if(choice == '2'){
            text_connection = "SELECT Person.name AS 'Person', Computer.name AS 'Computer', Computer.year_creation AS 'Year' FROM Person ORDER BY Person.name ASC "
                              "JOIN PersonComputer ON Person.ID = PersonComputer.id_person JOIN Computer ON PersonComputer.id_computer = Computer.ID;";
            valid = false;
        }
        else if(choice == '3'){
            text_connection = "SELECT Person.name AS 'Person', Computer.name AS 'Computer', Computer.year_creation AS 'Year' FROM Person "
                              "JOIN PersonComputer ON Person.ID = PersonComputer.id_person JOIN Computer ON PersonComputer.id_computer = Computer.ID"
                              "ORDER BY Person.name DESC;";
            valid = false;
        }*/
        else{
            cout << "Input is not valid! Please choose again" << endl;
            valid = true;
        }
    }while(valid);
}
