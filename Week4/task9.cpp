#include <iostream>
using namespace std;
void noOfTissuePaper(int,int);

main()
{
	int peoples,tissuePaper;
	cout<<"Number of people in household: ";
	cin>> peoples;
	cout<<"Number of rolls of tissue paper: ";
	cin>> tissuePaper;	
	
	noOfTissuePaper(peoples,tissuePaper);
}

void noOfTissuePaper(int peoples,int tissuePaper)
{
	int givenTissuePaper = tissuePaper*500;
	int TissuePaperPerPerson = givenTissuePaper/peoples;
	int carryOnForDays = TissuePaperPerPerson/57; 


	if(carryOnForDays < 14)
	{
	cout<<"Your Tissue Paper will only last "<<carryOnForDays <<" days, buy more!"<<endl;
	 }

	if(carryOnForDays >= 14)
	{
	cout<<"Your Tissue Paper will last "<<carryOnForDays <<" days, no need to panic!"<<endl;
	      }
}