#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip> 


using namespace std;

int main()
{
	int x, y;
	double v;
	const double z = 2.5;

	cout << "Enter x value: ";cin >> x;
	cout << "Enter y value: ";cin >> y;
	switch (x)
	{
	case 1:
		if (1 < y < 5)
		{
			v = 1 * y * z;
			cout << endl << "The value solved for V is " << fixed << setprecision(2) << setw(10) << endl << v;
		}
		else if (y >= 5)
		{
			v = 1 + (y / z);
			cout << endl << "The value solved for V is " << fixed << setprecision(2) << setw(10) << endl << v;
		}
		else 
			cout << endl << "The value solved for V is " << fixed << setprecision(2) << setw(10) << endl << 1+y+z;
		break;

	case 2:
		if (y <= 5)
		{
			v = fabs((2 - y) / z);
			cout << endl << "The value solved for V is " << fixed << setprecision(2) << setw(10) << endl << v;
		}
		else if (y > 5)
		{
			v = 2 - sqrt(y + z);
			cout << endl << "The value solved for V is " << fixed << setprecision(2) << setw(10) << endl << v;
		}
		break;

	default:
		double v = x + y + z;
		cout << endl << "The value solved for V is " << fixed << setprecision(2) << setw(10) << endl << v;
	}


	_getch();
	return 0;
}
