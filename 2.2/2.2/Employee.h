#pragma once
#include <string>
#include <iostream>

using namespace std;
class Employee
{
protected:
	string name;
	double hours;
	double salary;
	double vacation;
	double insurance;

public:
	//pre:Null
//post: sets all parameters to empty or 0 if nothing provided
	Employee();
	//pre:Null
//post: sets all parameters to their data counterparts
	Employee(string n, double h, double sal, double vac, double ins);
	//pre:Null
//post:	mutator
	void setHours(double h);
	//pre:Null
//post: accessor (returns data)
	double getHours();
	//pre:Null
//post:	mutator
	void setName(string n);
	//pre:Null
//post: accessor (returns data)
	string getName();
	//pre:Null
//post:	mutator
	virtual void setSalary()=0;//creates abstract virtual function
	//pre:Null
//post: accessor (returns data)
	double getSalary();
	//pre:Null
//post:	mutator
	virtual void setVacation()=0;//creates abstract virtual function
	//pre:Null
//post: accessor (returns data)
	double getVacation();
	//pre:Null
//post:	mutator
	virtual void setInsurance()=0;//creates abstract virtual function
	//pre:Null
//post: accessor (returns data)
	double getInsurance();
	//pre:Null
//post:	initiates functions
	void init();
};

