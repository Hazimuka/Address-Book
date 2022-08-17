// u2019341_Open Ended Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void displaytable();
void addinginformation();

#include<stdlib.h>



class Address {//class to temporarily store input


protected:
    string firstname;
    string lastname;
    string street;
    string zip;
    string city;
    string PhoneNo;
    string status;
    int date;
    int month;
    int year;
    char gender;



};



class AddressBook :public Address {//class to permanently stor input

private:

    string firstarr[150];
    string lastarr[150];
    string streetarr[150];
    string ziparr[150];
    string cityarr[150];
    string phonearr[150];
    int datearr[150];
    int montharr[150];
    int yeararr[150];
    string statusarr[150];
    char genderarr[150];
    



public:

    void assign(string first, string last, string streetadd, string zipcode, string cityname, string phoneno, int Date, int Month, int Year, char G, string Status) {
//assiging all members to arrays
   

        for (int i = 0; i < 150; i++)
        {
            if (firstarr[i] == "")
            {

             
                firstarr[i] = firstname;
                lastarr[i] = lastname;
                streetarr[i] = street;
                ziparr[i] = zip;
                cityarr[i] = city;
                phonearr[i] = PhoneNo;
                datearr[i] = date;
                montharr[i] = month;
                yeararr[i] = year;
                genderarr[i] = gender;
                statusarr[i] = status;

                break;
            }
        }
    }
    void initialize()//intializing all members
    {
        for (int i = 0; i < 150; i++)
        {
            
            firstarr[i] ="";
            lastarr[i] = "";
            streetarr[i] = "";
            ziparr[i] = "";
            cityarr[i] = "";
            phonearr[i] = "";
            datearr[i] = 0;
            montharr[i] = 0;
            yeararr[i] = 0;
            genderarr[i] = ' ';
            statusarr[i] = "";
        }



        }





    
    void searchname()//searching for name
    {
        string Name;
        cout << "Enter the name of the person you want to search for" << endl;

        cin >> Name;
        for (int i = 0; i < 150; i++) {

            if (Name == lastarr[i])
            {

                cout << genderarr[i] << '\n' << ziparr[i] << '\n' << cityarr[i] << '\n'
                    << streetarr[i] << '\n' << phonearr[i] << '\n' << datearr[i] << '\n'
                    << montharr[i] << '\n' << yeararr[i] << '\n' << statusarr[i] << endl;

                cout << "Information of person found and displayed" << endl;

                break;

            }

            else
            {
                cout << "name not found" << endl;
                break;
            }

        }

        displaytable();
    }
        void searchmonth()//searching for month

        {
            int month;

            cout << "Enter the month you want to search for with numbers" << endl;
            cin >> month;

            for (int i = 0; i < 150; i++)
            {
                if (month == montharr[i])
                {
                    cout << firstarr[i] << " " << lastarr[i] << endl;



                }

            }

            cout << "Names of people with born in the given month displayed" << endl;
            displaytable();

        }


    
        void searchstatus()//searching status
        {

            string stat;

            cout << "Enter the status you want to search for" << endl;
            cin >> stat;


            for (int i = 0; i < 150 ; i++)
            {

                if (statusarr[i] == stat)
                {

                    cout << firstarr[i] << " " << lastarr[i] << endl;

                }

            

            }

            cout << "Names of all people sharing the dame status are displayed" << endl;

            displaytable();

        }

        void searchgender()//searching gender
        {

            char Gender;

            cout << "Please input the gender you want to search for,M/F" << endl;
            cin >> Gender;



            for (int i = 0; i < 150; i++)
            {
                if (genderarr[i] == Gender)

                {
                    cout << firstarr[i] << '\n' << lastarr[i] << '\n' << ziparr[i]
                        << '\n' << cityarr[i] << '\n' << streetarr[i]
                        << '\n' << phonearr[i] << '\n' << datearr[i] << '\n'
                        << montharr[i] << '\n' << yeararr[i] << '\n' << statusarr[i] << endl;


                }



            }

            cout << "Displayed all people sharing the same gender" << endl;

            displaytable();
        }

        

}AB;



int main()
{
    AB.initialize();//intializing all members to null

        
    displaytable();

    
            

}

void addinginformation()//adding information for addressbook 

{


    string first="", last="", streetadd="", zipcode = "", cityname = "", phoneno = "";

    char G=' ';

    string status = "";

    int date=0, month = 0, year = 0;


    char choice = ' ';





    for (int i = 0; i < 150; i++)
    {
        cout << "Do you wish to add an entry,y/Y or n/N" << endl;

        cin >> choice;

        if (choice == 'n')
        {

            displaytable();

        }
  
        cout << "Please input First Name,Last Name,Street Name,Zipcode,City,Phone Number,Date of Birth,Month of Birth,Year of Birth, Gender and Status respectively in order" << endl;

        cin >> first >> last >> streetadd >> zipcode >> cityname >> phoneno >> date >> month >> year >> G >> status;

        

        AB.assign(first, last, streetadd, zipcode, cityname, phoneno, date, month, year, G,status);

        break;

      

       
    }

    displaytable();

}

void displaytable()//Menu for program
{


   
    cout << "1: Input information of a person" << endl;
    cout << "2: Display information of a person by name" << endl;
    cout << "3: Display names of people born in the given month" << endl;
    cout << "4: Display names of people with the same status" << endl;
    cout << "5: Display information of people with same gender" << endl;

    char table =' ';

    cin >>table;

    switch (table)
    {

    case '1':

        addinginformation();

    case '2':

        AB.searchname();

    case '3':

        AB.searchmonth();

    case '4':

        AB.searchstatus();

    case '5':

        AB.searchgender();


    }



}