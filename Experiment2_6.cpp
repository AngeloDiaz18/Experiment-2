#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int number=1,a,sum=0;
	while(number>0)
{

	cout<<"Enter a number: ";
	cin>> number;
	if(number>0)
	{
	
		sum=0;
		for (a=1; a <= number; a++) 
		{
        	sum += a;
    	}

    	cout << "Sum of whole numbers from 1 to " << number<<" is " <<sum<<endl;
	}
	else cout<<"Thank you!";
}
	
	
getch();
return 0;
}
