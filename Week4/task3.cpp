#include <iostream>
using namespace std;
void discount(string,float);

main ()
{
	while(true)
	{
	cout<<"  Please write first letter of country name capital.  "<<endl;
	string country;
	float ticketPrice;
	cout<<"Enter the country's name: ";
	cin>> country;
	cout<<"Enter the ticket price in dollars: $";
	cin>> ticketPrice;
	discount(country,ticketPrice);
	}
}

void discount(string country,float ticketPrice)
{	
	float discount1=ticketPrice-(0.05*ticketPrice);
	if (country == "Pakistan")
	{ cout<<"Final ticket price after discount: "<<discount1<<endl; }

	float discount2=ticketPrice-(0.1*ticketPrice);
	if (country == "Ireland")
	{ cout<<"Final ticket price after discount: "<<discount2<<endl; }
	
	float discount3=ticketPrice-(0.2*ticketPrice);
	if (country == "India")
	{ cout<<"Final ticket price after discount: "<<discount3<<endl; }

	float discount4=ticketPrice-(0.3*ticketPrice);
	if (country == "England")
	{ cout<<"Final ticket price after discount: "<<discount4<<endl; }

	float discount5=ticketPrice-(0.45*ticketPrice);
	if (country == "Canada")
	{ cout<<"Final ticket price after discount: "<<discount5<<endl; }
}