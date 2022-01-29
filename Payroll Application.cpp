// Payroll Application.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>
#include"Employee.h"
using namespace std;
int main()
{
    cEmployee Employee[50];
    char chChoice = 0, chSelect=0;
    int nChoice,nI,nEmployeeCount=0,nJ;
    int nSearch = 0;
    while (chChoice!='q')
    {
        cout << "********************************************************************************" << endl;
        cout << "                         1. Register Employee" << endl;
        cout << "                         2. Search Employee" << endl;
        cout << "                         3. Employee Salary " << endl;
        cout << "                         4. Edit Employee" << endl;
        cout << "                         5. View Employee" << endl;
        cout << "                         6. Exit" << endl;
        cout << "********************************************************************************" << endl;

        cout << "\nEnter your choice : ";
        cin >> nChoice;
        
        //while (chSelect != 'q')
        //{
            switch (nChoice)
            {
            case 1:
                system("cls");
                cout << "\nEnter Number of Employees To Register : ";
                cin >> nChoice;
                nJ = nChoice + nEmployeeCount;
                for (nI = nEmployeeCount; nI < nJ; ++nI)
                {
                    cout <<endl<< "****************************"<<endl<<endl;
                    Employee[nI].AddEmployee();
                    nEmployeeCount++;
                    Employee[nI].nEmployeeCode = nEmployeeCount;
                    

                }
               
                break;
            case 2:
                system("cls");
                
                cout << "Enter the Employee id for search the employee : ";
                cin >> nSearch;
                Employee->SearchEmployee(nSearch);
                break;
            case 3:
                //system("cls");
                break;
            case 4:
                //system("cls");
                break;
            case 5:
                system("cls");
                for (nI = 0; nI <nEmployeeCount; ++nI)
                {
                    Employee[nI].ViewEmployee();
                   
                }
                break;
            case 6:
                system("cls");
                exit(0);
            default: 
                cout << "**********************Incorrect Choice***********************";
                break;
            }
            cout << "Do You Want To Continue with this meanu press C \n Go to previous menu press q  \n";
            cin >> chSelect;
            system("cls");
       // }
        
    }
}

