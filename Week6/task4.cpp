#include <iostream>
using namespace std;

float billCalculations(char, char, int);

main()
{
    char serviceCode1;
    string serviceCode2; 
    char callTime;
    int minutes;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>> serviceCode1;
    cout<<"Enter the time of call (D/d for day, N/n for night): ";
    cin>> callTime;
    cout<<"Enter the number of minutes used: ";
    cin>> minutes;

    if( serviceCode1 == 'p' || serviceCode1 == 'P')
    { serviceCode2 = "Premium"; }
    if( serviceCode1 == 'r' || serviceCode1 == 'R')
    { serviceCode2 = "Regular"; }
    float billAmount = billCalculations(serviceCode1, callTime, minutes);

    if( ((serviceCode1 == 'p' || serviceCode1 == 'P') || (serviceCode1 == 'r' || serviceCode1 == 'R')) && (( callTime == 'd' || callTime == 'D') || (callTime == 'n' || callTime == 'N')))
    {
        cout<<"Service type: "<<serviceCode2<<endl;
        cout<<"Total Minutes used: "<<minutes<<" minutes"<<endl;
        cout<<"Amount due: $"<<billAmount;
    }
    else
    {
        cout<<"error";
    }
}

float billCalculations(char serviceCode1, char callTime, int minutes)
{
    float totalBill;
    if( serviceCode1 == 'R' || serviceCode1 == 'r')
    {
        if( minutes > 50)
        {
            totalBill = 10 + ((minutes - 50)*0.2);
        }
        else
        {
            totalBill = 10;
        }    
    }

    else if( serviceCode1 == 'P' || serviceCode1 == 'p' )
    {
        if( callTime == 'D' || callTime == 'd')
        {
            if( minutes > 75)
            {
                totalBill = 25 + (minutes - 75)*0.10;
            }
            else
            {
                totalBill = 25;
            }
        }
        else if(callTime == 'N' || callTime == 'n')
        {
            if( minutes > 100)
            {
                totalBill =  25 + (minutes - 100)*0.05;
            }
            else
            {
                totalBill  = 25;
            }
        }
    } 

    return totalBill;
}