#include <iostream>
using namespace std;

string decideActivity(string, string);

main()
{
    string temperature, humidity;
    cout<<"Enter temperature (warm or cold): ";
    cin>> temperature;
    cout<<"Enter humidity (dry or humid): ";
    cin>> humidity;

    string recommendedActivity = decideActivity(temperature, humidity);
    cout<<"Recommended activity: "<<recommendedActivity;
}

string decideActivity(string temperature, string humidity)
{
    string activity;
    if( temperature == "warm")
    {
        if( humidity == "dry")
        {
            activity = "Play Tennis";
        }
        if( humidity == "humid")
        {
            activity = "swim";
        }
    }

    else if( temperature == "cold")
    {
        if( humidity == "dry")
        {
            activity = "Play basketball";
        }
        if( humidity == "humid")
        {
            activity = "watch tv";
        }
    }

   return activity; 
}