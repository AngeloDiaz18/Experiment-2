#include <iostream>
#include <conio.h>

using namespace std;

int main()

{	
	int usedGallons;
	float pastMonth, totalCost;
	const float demandCharge = 35, conCharge = 1.10; 

	cout << "Enter unpaid amount from the past month: ";	cin >> pastMonth; 
	cout << "Enter gallons consumed in the current month: ";	cin >>	usedGallons;
		
	if (pastMonth < 0 || usedGallons < 0 ) 
	cout << "\nInvalid amount!" << endl;

	else if (pastMonth > 0) 
		{
			totalCost = demandCharge + (conCharge * usedGallons) + pastMonth + 20;
			cout << "\nYour water bill costs: P" << totalCost << endl;
		}

	else 
		{
			totalCost = demandCharge + (conCharge * usedGallons);
			cout << "\nYour water bill costs: P" << totalCost << endl;
		}

	_getch();
	return 0;
}
