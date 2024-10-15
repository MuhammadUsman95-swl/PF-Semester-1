#include <iostream>
using namespace std;

string checkSpeed(int);

main()
{
    int speed;
    cout<<"Enter the speed: ";
    cin>> speed;

    string speedIndicator = checkSpeed( speed );
    cout<<""<<speedIndicator;
}

string checkSpeed(int speed)
{
    string indicteSpeed;
    if( speed > 0 && speed <= 10)
    {
       indicteSpeed = "slow";
    }
    else if( speed > 10 && speed <= 50)
    {
       indicteSpeed = "average";
    }
    else if( speed > 50 && speed <= 150)
    {
       indicteSpeed = "fast";
    
    }
    else if( speed > 150 && speed <= 1000)
    {
       indicteSpeed = "ultra-fast";
    }
    else if( speed > 1000)
    {
       indicteSpeed = "extremely fast";
    }

    return indicteSpeed;
}