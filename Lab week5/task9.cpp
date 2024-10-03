#include <iostream>
using namespace std;

int futureTime(int , int);

main()
{
    int hours,minutes;
    cout<<"Enter hours: ";
    cin>> hours;
    cout<<"Enter minutes: ";
    cin>> minutes;

    futureTime(hours,minutes);
}

int futureTime(int hours, int minutes)
{
    int time=(hours*60)+minutes+15;
    int hour=time/60;
    int minute=time%60;
    if(hour <= 23)
    {
     cout<<hour<<":"<<minute;
    }

    else
    {
     int hour1=hour-24;
     int minute1=time%60;
     cout<<hour1<<":"<<minute1;
    }
}