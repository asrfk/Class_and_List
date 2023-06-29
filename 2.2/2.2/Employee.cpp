#include "Employee.h"

Employee::Employee() {//default constructor
	hours = 0;
	name = " ";
	salary = 0;
	vacation = 0;
	insurance = 0;
}

Employee::Employee(string n, double h, double sal, double vac, double ins) {//Constructor
	hours = h;
	name = n;
	salary= sal;
	vacation = vac;
	insurance = ins;
}
double Employee::getHours() { return hours; }//returns hours
void Employee::setHours(double h) { hours = h; } //sets hours to h

string Employee::getName() { return name; }//returns name
void Employee::setName(string n) { name = n; }//sets name to parameter given

double Employee::getSalary() { return salary; }//returns salary

double Employee::getInsurance() { return insurance; }//returns insurance

double Employee::getVacation() { return vacation; }//returns vacations

void Employee::init() {//runs all sets
	setSalary();
	setInsurance();
	setVacation();
}

