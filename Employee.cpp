#include "Employee.h"
#include <iostream>
#include<string.h>
#include<string>
using namespace std;
void cEmployee::AddEmployee()
{
	int nChoice=0;
	cout << "Enter name : ";
	cin.ignore();
	getline(cin, csName);
	cout << "Enter Age : ";
	cin >> nAge;
	cout << "Choose Designation : ";
	cout << "\n			1. Doctor\n			2.Nurse\n			3.Receptionlist\n";
	cin >> nChoice;
	switch (nChoice)
	{
	case 1:
		csDesignation = "Doctor";
		break;
	case 2:
		csDesignation = "Nurse";
		break;
	case 3:
		csDesignation = "Receptionlist";
		break;
	default: cout << "invalid choice ";
		break;
	}
	if (csDesignation == "Doctor")
	{
		AddDoctor();

	}
	else if (csDesignation == "Nurse")
	{
		AddNurse();
	}
	else if (csDesignation == "Receptionlist")
	{
		AddReceptionist();
	}
	
	
}

void cEmployee::ViewEmployee()
{
	cout << "Emplyee id		:" << nEmployeeCode << endl;
	cout << "Emplyee Name	:" << csName << endl;
	cout << "Emplyee Age	:" << nAge << endl;
	cout << "Emplyee Desigination :" << csDesignation << endl;
	if (csDesignation == "Doctor")
	{
		ViewDoctor();

	}
	else if (csDesignation == "Nurse")
	{
		ViewNurse();
	}
	else if (csDesignation == "Receptionlist")
	{
		ViewReceptionist();
	}
	
	
}

void cEmployee::SearchEmployee(int nId)
{
	int nIndex = 0;
	cout << nEmployeeCode;
	if (nId <= nEmployeeCode)
	{
		for (int nI = 0; nI < nEmployeeCode; ++nI)
		{
			if (nId == nEmployeeCode)
			{
				cout << "Emplyee Name	:" << csName << endl;
				cout << "Emplyee Age	:" << nAge << endl;
				cout << "Emplyee Desigination :" << csDesignation << endl;
				if (csDesignation == "Doctor")
				{
					ViewDoctor();

				}
				else if (csDesignation == "Nurse")
				{
					ViewNurse();
				}
				else if (csDesignation == "Receptionlist")
				{
					ViewReceptionist();
				}

			}
			++nIndex;
		}
	}
	else
	{
		cout << "*****************************Empty Database*************************************\n";
	}
}

void cEmployee::EditEmployee()
{
	int nId;
	int nIndex = 0;
	cout << "Enter the Employee Id  : ";
	cin >>nId ;
	if (nId <= nEmployeeCode)
	{
		for (int nI = 1; nI <= nEmployeeCode; ++nI)
		{
			if (nId == nI)
			{

			}
		}
		++nIndex;
	}
	else
	{
		cout << "*****************************Empty Database*************************************";
	}
}
