#pragma once
#include"Doctor.h"
#include"Nurse.h"
#include"Receptionist.h"
class cEmployee : protected cDoctor, protected cNurse, protected CReceptionist
{
private:
	int	nEmployeeCode;
	string csName;
	int	nAge;
	string 	csDesignation;

public:
	void AddEmployee();
	void ViewEmployee();
	void SearchEmployee(int);
	void EditEmployee();
	//void CalculateSalary();
};

