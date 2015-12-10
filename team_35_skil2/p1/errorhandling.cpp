#include "variables.h"

int changeToInt(char* val)
{
	if(isdigit(val[0]))
		return atoi(val);
	else
		return 0;
}

int inputInt(bool pos)
{
    char* temp_char = '\0';
    temp_char = inputchoice();
	int temp_int = changeToInt(temp_char);
	//cout << temp_int << endl;
	if(pos && temp_int < 0)
		return 0;
	else
		return temp_int;
}

void legalConnectionInput(int& IDpers, int& IDcomp, QSqlDatabase& db)
{
    bool error = false;
    IDpers = 0;
    IDcomp = 0;
    vector<Person> VECTpers;
    cout << "Inputing Person" << endl;
    QString person = getPeopleQueryString();
    QSqlQuery query = getQuery(db, person);
    int NUMpeople = printPersonTableINT(query, VECTpers);
    if(NUMpeople < 1)
        error = true;
    if(!error)
    {
        if(NUMpeople ==1)
        {
            cout << "1 person found and set" << endl;
            IDpers = NUMpeople -1;
            error = false;
        }
        else
        {
            cout << NUMpeople << " people found" << endl;
            cout << "Enter the row number of the correct person:";
            IDpers = inputInt();
            if(IDpers < 1)
            {
                cout << "Number not on list. Ending Input." << endl;
                error = true;
            }
            else
            {
                error = false;
                IDpers--;
                cout << "Person set." << endl;
            }
        } // else for if(NUMpeople ==1) END
        if(!error)
        {
            error = false; // Justin Case
            vector<Computer> VECTcomp;
            cout << "Inputing Computer" << endl;
            QString computer = getComputerQueryString();
            QSqlQuery query2 = getQuery(db, computer);
            int NUMcomputers = printComputerTableINT(query2, VECTcomp);
            if(NUMpeople < 1)
                error = true;
            if(!error)
            {
                if(NUMcomputers ==1)
                {
                    cout << "1 computer found and set" << endl;
                    IDcomp = NUMcomputers -1;
                    error = false;
                }
                else
                {
                    cout << NUMcomputers << " computers found" << endl;
                    cout << "Enter the row number of the correct computer:";
                    IDcomp = inputInt();
                    if(IDcomp < 1)
                    {
                        cout << "Number not on list. Ending Input." << endl;
                        error = true;
                    }
                    else
                    {
                        error = false;
                        IDcomp--;
                        cout << "Computer set." << endl;
                    }

                } // else for if(NUMcomputers ==1) END
                if(!error)
                    {
                        IDpers = search_for_id(db, VECTpers.at(IDpers));
                        IDcomp = search_for_id(db, VECTcomp.at(IDcomp));
                    } // if(!error) #3 END
            }
            else
                cout << "No computer found. Ending Input." << endl;
        } // if(!error) #2 END
    } // if(!error) #1 END
    else
        cout << "No person found. Ending Input." << endl;


}

//Checks if users input data for person is legal or not
void legalPerson(string& name, string& sex, int& brth, int& dth)
 {
    bool err = false;
    string ans;
    brth = 0;

    cout << "Name: ";
    cin.sync();
    getline(cin, name);

    do{
        cout << "Gender - f/m: ";
        cin >> sex;
        if(sex[0] == 'f' || sex[0] == 'F'){
            sex = "Female";
            err = false;
        }
        else if(sex[0] == 'm' || sex[0] == 'M'){
            sex = "Male";
            err = false;
        }
        else{
            err = true;
            cout << "Input invalid, please enter 'f' for female or 'm' for male" << endl;
        }
    }while(err);

    do{
        cout <<"Year of Birth: ";
        brth = inputInt();
        if(brth > 0){
            err = false;
        }
        else{

            cout << "Please enter a valid date." << endl;
            err = true;
        }
    }while(err);

    do{
        cout <<"Is the person still alive? y/n: ";
        cin >> ans;
        if(ans[0] == 'n' || ans[0] == 'N')
        {
            do{
                cout <<"Year of Death: ";
                dth = inputInt();
                if(dth >= brth){
                    err = false;
                }
                else{
                    cout << "Please enter a valid date." << endl;
                    err = true;
                }
            }while(err);
        }
        else if(ans[0] == 'y' || ans[0] == 'Y') {
            dth  = '\0';
            err = false;
        }
        else {
            cout << "Please enter a valid letter." << endl;
            err = true;
        }
    }while(err);

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
       yearCre = inputInt();
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

