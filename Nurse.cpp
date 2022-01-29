#include "Nurse.h"
#include <iostream>
#include<string.h>
#include<string>
using namespace std;
void cNurse::AddNurse()
{
	
	cout << "Enter Number of Patients : ";
	cin >> nNumberPatients;
	cout << "Enter Experience : ";
	cin >> nExperience;
}

void cNurse::ViewNurse()
{
	cout << "Number Of Patients : "<<nNumberPatients << endl;
	cout << "Experience : " << nExperience << endl;
}
