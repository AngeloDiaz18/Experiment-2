#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()

{
    char subPack; 
    float tHours, tCost; 
    bool payUp = false;

	do
	{
		cout << "Good day, customer!\n\nWhich package have you purchased? ";	cin >> subPack;
        cout << "How many hours have been used? ";	cin >> tHours;
		
		
		if ((subPack != 'A' && subPack != 'a' && subPack != 'B' && subPack != 'b' && subPack != 'C' && subPack != 'c') || tHours < 0) 
			{
				cout << "\nInvalid input! \n\n"; 
				break; 
			}
			
		
		else
		
		{
			switch(subPack)
				{
					case 'A':
					case 'a':
						if (tHours < 10) 
						tCost = 995;
						else
						tCost = 995 + (tHours - 10) * 20; 
						break;
					case 'B':
					case 'b':
						if (tHours < 20) 
						tCost = 1495;
						else
						tCost = 1495 + (tHours - 20) * 10; 
						break;
					case 'C':
					case 'c':
						tCost = 1995; 
						break;
				}
		
			cout << "\nTotal amount due: P" << tCost << "\n\n" << endl;
		}
		
	} while (!payUp); 

    _getch();
    return 0;
}
