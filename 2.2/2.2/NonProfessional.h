#pragma once
#include "Employee.h"
class NonProfessional: public Employee
{
private:
	string position;
public:
	//pre:Null
//post: sets all parameters to empty or 0 if nothing provided
	NonProfessional();
	//pre:Null
//post: sets all parameters to their data counterparts
	NonProfessional(string n, double h, double sal, double vac, double ins, string pos);
	//pre:Null
//post:	mutator
	void setHours(double h);
	//pre:Null
//post: accessor (returns data)
	double getHours();
	//pre:Null
//post:accessor (returns data)
	int getSalary();
	//pre:Null
//post:mutator  
	void setSalary();
	//pre:Null
//post:accessor (returns data)
	int getInsurance();
	//pre:Null
//post:mutator
	void setInsurance();
	//pre:Null
//post:accessor (returns data)
	int getVacation();
	//pre:Null
//post:mutator
	void setVacation();
	//pre:Null
//post: prints out necessary Data
	void print();
};

