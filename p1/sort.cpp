#include <algorithm>
#include "PerCom.h"
#include "variables.h"

using namespace std;

void sortNAME(QString& text_person, QString& order)
{
    char* choice;
    bool valid = false;

    cout << "In which order would you like to output the table: " << endl;
    cout << "------------------------------------------------" << endl;
    cout << "[1] Oldest data to newest" << endl;
    cout << "[2] Alphabetical" << endl;
    cout << "[3] Reverse alphabetical" << endl;
    cout << "[4] Year of birth" << endl;
    cout << "[5] Year of death" << endl;

    do{
        valid = false;
        cout << "Input: ";
        choice = inputchoice();
        cout << endl;
        if(strcmp(choice, "1") == 0){
            text_person += order;
        }
        else if(strcmp(choice, "2") == 0){
            order = " ORDER BY name COLLATE NOCASE ASC;";
            text_person += order;
        }
        else if(strcmp(choice, "3") == 0){
            order = " ORDER BY name COLLATE NOCASE DESC;";
            text_person += order;
        }
        else if(strcmp(choice, "4") == 0){
            order = " ORDER BY year_birth, name COLLATE NOCASE ASC;";
            text_person += order;
        }
        else if(strcmp(choice, "5") == 0){
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
    char* choice;
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
        valid = false;
        cout << "Input: ";
        choice = inputchoice();
        cout << endl;
        if(strcmp(choice, "1") == 0){
            text_computer += order;
        }
        else if(strcmp(choice, "2") == 0){
            order = " ORDER BY name COLLATE NOCASE ASC;";
            text_computer += order;
        }
        else if(strcmp(choice, "3") == 0){
            order = " ORDER BY name COLLATE NOCASE DESC;";
            text_computer += order;
        }
        else if(strcmp(choice, "4") == 0){
            order = " ORDER BY year_creation, name COLLATE NOCASE ASC;";
            text_computer += order;
        }
        else if(strcmp(choice, "5") == 0){
            order = " ORDER BY was_built, name COLLATE NOCASE ASC;";
            text_computer += order;
        }
        else if(strcmp(choice, "6") == 0){
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
    char* choice;
    bool valid = false;

    cout << "In which order would you like to output the table: " << endl;
    cout << "------------------------------------------------" << endl;
    cout << "[1] Oldest data to newest" << endl;
    cout << "[2] In alphabetical order by person's name" << endl;
    cout << "[3] In reverse alphabetical order by person's name" << endl;
    cout << "[4] In alphabetical order by computer's name" << endl;
    cout << "[5] In reverse alphabetical order by computer's name" << endl;
    cout << "[6] By year built" << endl;

    do{
        valid = false;
        cout << "Input: ";
        choice = inputchoice();
        cout << endl;
        if(strcmp(choice, "1") == 0){
            text_connection += order;
            valid = false;
        }
        else if(strcmp(choice, "2") == 0){
            order = " ORDER BY Person COLLATE NOCASE ASC;";
            text_connection += order;
            valid = false;
        }
        else if(strcmp(choice, "3") == 0){
            order = " ORDER BY Person COLLATE NOCASE DESC;";
            text_connection += order;
            valid = false;
        }
        else if(strcmp(choice, "4") == 0){
            order = " ORDER BY Computer COLLATE NOCASE ASC;";
            text_connection += order;
        }
        else if(strcmp(choice, "5") == 0){
            order = " ORDER BY Computer COLLATE NOCASE DESC;";
            text_connection += order;
        }
        else if(strcmp(choice, "6") == 0){
            order = " ORDER BY Year, Person COLLATE NOCASE ASC;";
            text_connection += order;
        }
        else{
            cout << "Input is not valid! Please choose again" << endl;
            valid = true;
        }
    }while(valid);
}
