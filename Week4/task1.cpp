#include <iostream>
using namespace std;
void testEquality(int,int);

main() 
{
	int number1,number2;
	cout<<"Enter the first number: ";
	cin>> number1;
	cout<<"Enter second number: ";
	cin>> number2;
	testEquality(number1,number2); 
}

void testEquality(int number1,int number2)
{
	if(number1==number2)
	{cout<<"true";}

	if(number1 != number2)
	{cout<<"false";}
}
