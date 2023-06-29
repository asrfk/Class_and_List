#pragma once
#include "Employee.h"
class Professional :public Employee
{
private: 
	string position;
public:
	Professional();
	Professional(string n, double h, double sal, double vac, double ins,string pos);
	//pre:Null
//post: accessor (returns data)
	double getSalary();
	//pre:Null
//post:	mutator
	void setSalary();
	//pre:Null
//post: accessor (returns data)
	double getInsurance();
	//pre:Null
//post:	mutator
	void setInsurance();
	//pre:Null
//post: accessor (returns data)
	double getVacation();
	//pre:Null
//post:	mutator
	void setVacation();
	//pre:Null
//post:	outputs relevant information
	void print();

};

