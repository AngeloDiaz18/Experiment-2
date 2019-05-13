#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int y;

	cout << "The Count:" << endl;
	for (y = 1; y < 10; y++)

	{
		cout << y << ",";
	}

	for (y = 10; y >= 10, y <= 30; y += 2)

	{
		cout << y << ",";
	}

	cout << "\b ";

	_getch();
	return 0;
}
