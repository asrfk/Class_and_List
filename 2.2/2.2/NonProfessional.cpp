#include "NonProfessional.h"
NonProfessional::NonProfessional() {
	position = "Unknown"; 
}
NonProfessional::NonProfessional(string n, double h, double sal, double vac, double ins, string pos) :Employee(n, h, sal, vac, ins) { position = pos; }

double NonProfessional::getHours() { return hours; }//returns hours 
void NonProfessional::setHours(double h) { hours = h; }//sets input hours (h) to hours

int NonProfessional::getSalary() { return salary; }
void NonProfessional::setSalary() { salary = hours * 10; }//calculates salary

int NonProfessional::getInsurance() { return insurance; }
void NonProfessional::setInsurance() { insurance = salary * 0.01; }//calculates insurance

int NonProfessional::getVacation() { return vacation; }
void NonProfessional::setVacation() { vacation = hours * 0.5; }//calculates vacation 

void NonProfessional:: print() {//prints relevant information
	cout << name << " " << endl << "Hours: " << hours << endl << "Weekly Salary: " << salary << endl<< "Vacation: " << vacation << endl << "Insurance: " << insurance << endl;
}