#include <iostream>
using namespace std;

float calculateStudio(string, int);
float calculateApartment(string, int); 

main()
{
    string month;
    int numberOfStays;
    cout<<"Enter the month (may, june, july, august, september, october): ";
    cin>> month;
    cout<<"Enter the number of stays: ";
    cin>> numberOfStays;

    float apartmentBill = calculateApartment(month, numberOfStays);
    float studioBill = calculateStudio(month, numberOfStays);
    cout<<"Apartment: "<<apartmentBill <<"$"<<endl;
    cout<<"Studio: "<<studioBill <<"$"; 
}

float calculateStudio(string month, int numberOfStays) 
{
    float studioPrice;
    float priceAfterDiscount = 0.000000;
    if( month == "may" || month == "october")
    {
       studioPrice =  50 * numberOfStays;
    }
    else if( month == "june" || month == "september")
    {
       studioPrice =  75.20 * numberOfStays;
    }
    else if( month == "july" || month == "august")
    {
       studioPrice =  76 * numberOfStays;
    }    

    if(month == "may" || month == "october")
    {
        if(numberOfStays > 7 && numberOfStays <= 14)
        {
            priceAfterDiscount = studioPrice - (studioPrice * 0.05);
        }
        if(numberOfStays > 14)
        {
            priceAfterDiscount = studioPrice - (studioPrice * 0.3);
        }
    }

    else if( numberOfStays > 14 && (month == "june" || month == "september"))
    {
        priceAfterDiscount = studioPrice - (studioPrice * 0.02);
    }
        
    else
    {
        priceAfterDiscount = studioPrice;
    }
    return priceAfterDiscount;
}

float calculateApartment(string month, int numberOfStays)
{
    float apartmentPrice;
    float priceAfterDiscount = 0.000000;
    if( month == "may" || month == "october")
    {
       apartmentPrice =  65 * numberOfStays;
    }
    if( month == "june" || month == "september")
    {
       apartmentPrice =  68.70 * numberOfStays;
    }
    if( month == "july" || month == "august")
    {
       apartmentPrice =  77 * numberOfStays;
    }    

    if( numberOfStays > 14 )
    {
        priceAfterDiscount = apartmentPrice - (apartmentPrice * 0.1);
    }
    else
    {
        priceAfterDiscount = apartmentPrice;
    }
    return priceAfterDiscount;
}