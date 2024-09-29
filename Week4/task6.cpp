#include <iostream>
using namespace std;
void longestDuration(int,int);

main()
{
int minute,hour;
cout<<"Enter the number of hours: ";
cin>> hour;
cout<<"Enter the number of minutes: ";
cin>> minute;

longestDuration(minute,hour);
}

void longestDuration(int minute,int hour)
{
int minuteInHour=hour*60;

if(minuteInHour>minute)
{ cout<<""<<hour;}
if(minute>minuteInHour)
{ cout<<""<<minute;} 

}