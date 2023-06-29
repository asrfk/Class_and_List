#include "Employee.h"
#include "NonProfessional.h"
#include "Professional.h"

int main() {
	string name;
	int hours,sal, vac, ins,select;
	cout << "HELLO" << endl << endl << "Welcome to Family Mart, Where were all Family." << endl << "Please enter your name: " << endl << endl;
	cin >> name;//user puts in name
	cout << "Are you a Seaonal Employee or a Permanent Employee"<<endl<<"1) Seasonal"<<endl<<"2) Permanent"<<endl << endl;
	cin >> select;//selects position
	if (select==1)
	{
		cout << "Enter the hours you worked this week: " << endl;
		cin >> hours;

		NonProfessional Nonprofessional(name, hours, 0, 0, 0, "temp");//basic inputs for class
		Nonprofessional.init();//initializes data
		Nonprofessional.print();//prints out designated hourly worker
	}

	else if (select==2){
		cout << "Your all set. Here is all the information you need" << endl << endl;
		Professional Professional(name, 40, 4000, 40, 800, "perm");//pre set information
		Professional.init();
		Professional.print();
	}


}