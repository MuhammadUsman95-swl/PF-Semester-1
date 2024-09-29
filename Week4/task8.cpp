#include <iostream>
using namespace std;
void pet(int holidays);

main()
{
	int holidays;
	cout<<"Holidays: ";
	cin>> holidays;

	pet(holidays);
}

void pet(int holidays)
{
	float workingDays=365-holidays;
	float timeForGame=(workingDays*63)+(holidays*127);
	float differenceFromNorm=30000-timeForGame;

	if(timeForGame-30000 < 0)
	{	
	int hours1=differenceFromNorm/60;
	int minutes1=hours1%60;
	cout<<"Tom sleeps well"<<endl;
	cout<<""<<hours1<<" hours and "<<minutes1<<" minutes less for play.";
		}

	if(timeForGame-30000 > 0)
	{
	int play=timeForGame-30000;
	int hours2=play/60;
	int minutes2=play%60;
	cout<<"Tom will run away"<<endl;
	cout<<""<< hours2<<" hours and "<< minutes2<<" minutes for play.";
	      }
}