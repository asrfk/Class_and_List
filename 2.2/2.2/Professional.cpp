#include "Professional.h"

Professional::Professional() { position = "Unknown"; }
Professional::Professional(string n, double h, double sal, double vac, double ins, string pos):Employee(n,h,sal,vac,ins) {position = pos;}

double Professional::getSalary() { return salary; }
void Professional::setSalary() { 
	salary = salary / 4;//calculates weekly salary
}

double Professional::getInsurance() { return insurance; }
void Professional::setInsurance() { insurance = insurance; }//collects insurance

double Professional::getVacation() { return vacation; }
void Professional::setVacation() { vacation = vacation; }//collects insurance

void Professional::print() {
	cout << name << " " << endl << "Hours: " << hours << endl << "Weekly Salary: " << salary << endl << "Vacation: " << vacation << endl << "Insurance: " << insurance << endl;
}
