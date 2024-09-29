#include <iostream>
using namespace std;
void reverseTruthValue(string);

main ()
{
	string truthValue;
	cout<<"Enter 'true' or 'false': ";
	cin>> truthValue;
	reverseTruthValue(truthValue);
}

void reverseTruthValue(string truthValue)
{
	if(truthValue == "true")
	{cout<<"false";}

	if(truthValue == "false")
	{cout<<"true";}
}