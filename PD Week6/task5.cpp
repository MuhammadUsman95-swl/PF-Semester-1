#include <iostream>
using namespace std;

float calculatePrice(string,string, int);

main()
{
    string fruitName, day;
    int quantity;
    cout<<"Enter the fruit name: ";
    cin>> fruitName;
    cout<<"Enter the day of week (e.g., monday,..sunday): ";
    cin>> day;
    cout<<"Enter the quantity: ";
    cin>> quantity;
    float fruitPrice = calculatePrice(fruitName, day, quantity);

    if(( day == "monday" ||day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday" || day == "saturday" || day == "sunday") && ( fruitName == "banana" || fruitName == "apple" || fruitName == "orange" || fruitName == "grapefruit" || fruitName == "kiwi" || fruitName == "pineapple" || fruitName == "grapes"))
    {
       cout<<""<<fruitPrice; 
    }
    else
    {
        cout<<"error";
    }
}

float calculatePrice(string fruitName, string day, int quantity)
{
    float price;
    if( fruitName == "banana")
    {
        if( day == "monday" ||day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday" || day == "saturday")
        {
            price = quantity * 2.50;
        }
        else if( day == "sunday")
        {
            price = quantity * 2.70;
        }
    }

    if( fruitName == "apple")
    {
        if( day == "monday" ||day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday" || day == "saturday")
        {
            price = quantity * 1.20;
        }
        else if( day == "sunday")
        {
            price = quantity * 1.25;
        }
    }

    if( fruitName == "orange")
    {
        if( day == "monday" ||day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday" || day == "saturday")
        {
            price = quantity * 0.85;
        }
        else if( day == "sunday")
        {
            price = quantity * 0.90;
        }
    }

    if( fruitName == "grapefruit")
    {
        if( day == "monday" ||day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday" || day == "saturday")
        {
            price = quantity * 1.45;
        }
        else if( day == "sunday")
        {
            price = quantity * 1.60;
        }
    }

    if( fruitName == "kiwi")
    {
        if( day == "monday" ||day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday" || day == "saturday")
        {
            price = quantity * 2.70;
        }
        else if( day == "sunday")
        {
            price = quantity * 3.0;
        }
    }

    if( fruitName == "pineapple")
    {
        if( day == "monday" ||day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday" || day == "saturday")
        {
            price = quantity * 5.50;
        }
        else if( day == "sunday")
        {
            price = quantity * 5.60;
        }
    }    

    if( fruitName == "grapes")
    {
        if( day == "monday" ||day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday" || day == "saturday")
        {
            price = quantity * 3.85;
        }
        else if( day == "sunday")
        {
            price = quantity * 4.20;
        }
    }
        
    return price;
}