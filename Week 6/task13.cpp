#include <iostream>
using namespace std;

float lowestPrice(int, string);

main()
{
    int distance;
    string dayPeriod;
    cout<<"Enter the number of kilometers: ";
    cin>> distance;
    cout<<"Enter the period of day: ";
    cin>> dayPeriod;

    float calculateLowestPrice = lowestPrice(distance, dayPeriod);
    cout<<"The lowest price for "<<distance<<" kilometers: "<<calculateLowestPrice<<" EUR";

}

float lowestPrice(int distance, string dayPeriod)
{
    float calculatePrice ;
    if( distance < 20 )
    {
        if( dayPeriod == "day")
        { calculatePrice = 0.70 + (distance * 0.79 ); }
        if( dayPeriod == "night")
        { calculatePrice = 0.70 + (distance * 0.90 );}

    }

    else if( (distance >= 20 && distance < 100) && ( dayPeriod == "day" || dayPeriod == "night"))
    {
        calculatePrice = distance * 0.09 ;
    }

    else if( distance >= 100 && ( dayPeriod == "day" || dayPeriod == "night"))
    {
        calculatePrice = distance * 0.06 ;
    }

    return calculatePrice;
}