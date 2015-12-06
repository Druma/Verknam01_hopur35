#include "variables.h"
#include <limits>

Person::Person(string nm, string sx, int brth, int dth)
{
    name = nm;
    sex = sx;
    year_birth = brth;
    year_death = dth;
}
 string Person::getnm()
 {
     return name;
 }

 string Person::getsx()
 {
     return sex;
 }

 int Person::getbrth()
 {
     return year_birth;
 }

 int Person::getdth()
 {
     return year_death;
 }

//Checks if users input data for person is legal or not
 void legalPerson(string& name, string& sex, int& brth, int& dth)
 {
    bool err = false;
    string ans;
    brth = 0;

    cout <<"Name: ";
    cin.sync();
    getline(cin, name);
    toupper(name[0]);

    do{
        cout <<"Gender - female/male: ";
        cin >> sex;
        if(sex == "female" || sex == "f" || sex == "F" || sex == "Female"){
            sex = "Female";
            err = false;
        }
        if(sex == "male" || sex == "m" || sex == "M" || sex == "Male"){
            sex = "Male";
            err = false;
        }
        else{
            err = true;
            cout << "please enter: [female/male/f/m/F/M]" << endl;
        }
    }while(err);

    do{
        cout <<"Year of Birth: ";
        brth = inputIntC();
        if(brth > 99 && brth <= 9999 ){
            err = false;
        }
        else{
            
            cout << "Please enter a valid date." << endl;
            err = true;
        }    
    }while(err);

    cout <<"Is the person still alive? y/n: ";
    cin >> ans;
    if(ans == "n" || ans == "N" || ans == "no" || ans == "NO" || ans == "No")
    {
        do{
			cout <<"Year of Death: ";
			dth = inputIntC();
            if(dth >= brth && dth <= 9999){
				err = false;
			}
			else{
				
				cout << "Please enter a valid date." << endl;
				err = true;
			}    
		}while(err);
    }
    else
        dth  = '\0'; //TRY TO CHANGE THIS INTO EMPTY LINE INSTEAD OF 0


 }

 Person setPerson()
{
    string name, sex;
    int brth, dth;

    legalPerson(name, sex, brth, dth);

    return Person(name, sex, brth, dth);
}

/*void printPer(Person per)
{
    cout << "Name: " << per.getnm() << endl;
    cout << "Gender: " << per.getsx() << endl;
    cout << "Year of birth: " << per.getbrth() << endl;
    if(per.getdth() != '\0')
    {
        cout << "Year of death: " << per.getdth() << endl;
    }
    cout << endl;
}*/

//Computer information
Computer::Computer(string nm, int yc, string tp, bool wc){

    name = nm;
    year_creation = yc;
    comptype = tp;
    was_created = wc;
}
 string Computer::getnm()
 {
     return name;
 }

 int Computer::getyc()
 {
     return year_creation;
 }

 string Computer::gettp()
 {
     return comptype;
 }

 bool Computer::getwcb()
 {
     return was_created;
 }

 //Checks if users input data is legal or not
 void legalComputer(string& name, int& yearCre, string& tp, bool& wc)
 {
    bool err = false;
    string ans;

    cout <<"Name: ";
    cin.sync();
    getline(cin, name);
	
	do{
        cout <<"Year of Creation: ";
        yearCre = inputIntC();
        if(yearCre>0){
            err = false;
        }
        else{

            cout << "Please enter a valid date." << endl;
            err = true;
        }
    }while(err);

	
	cout <<"Type of Computer: ";
    cin.sync();
    getline(cin, tp);

	do{
        cout <<"Was the Computer ever built? y/n: ";
        cin >> ans;
        if(ans == "n" || ans == "N" || ans == "no" || ans == "NO" || ans == "No")
        {
            wc = false;
            err = false;
        }
        else if(ans == "y" || ans == "Y" || ans == "yes" || ans == "YES" || ans == "Yes")
        {
            wc = true;
            err = false;
        }
        else
		{
            cout << "Not a valid answer." << endl;
            err = true;
		}
    }while(err);
 }

Computer setComputer()
{
    string name, comptype;
    int yearCreate;
    bool built;

    legalComputer(name, yearCreate, comptype, built);

    return Computer(name, yearCreate, comptype, built);
}
//READY
/*void printComputer(Computer comp)
{
    cout << "Name: " << comp.getnm() << endl;
    cout << "Year of creation: " << comp.getyc() << endl;
    cout << "Type of computer: " << comp.gettp() << endl;
    if(comp.getwcb())
    {
        cout << "Was built: YES" << endl;
    }
    else
        cout << "Was built: NO" << endl;
    cout << endl;
}*/
