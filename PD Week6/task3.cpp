#include <iostream>
using namespace std;

string checkZodiacSign(string, int);

main()
{
    string month;
    int date;
    cout<<"Enter the month of birth: ";
    cin>> month;
    cout<<"Enter the date of birth(only date): ";
    cin>> date;

    string yourZodiacSign = checkZodiacSign(month, date);
    cout<<"Your zodiac sign is: "<<yourZodiacSign;
}

string checkZodiacSign(string month, int date)
{
    string zodiacSign;
    if ( (month == "march" && (date >= 21 && date <=  31 )) || (month == "april" && (date >= 1 && date <=  19 )) )
    { zodiacSign = "Aries"; }
    else if ( (month == "april" && (date >= 20 && date <=  30 )) || (month == "may" && (date >= 1 && date <=  20 )) )
    { zodiacSign = "Taurus";}
    else if ( (month == "may" && (date >= 21 && date <=  31 )) || (month == "june" && (date >= 1 && date <= 20 ))  )
    { zodiacSign = "Gemini";}
    else if ( (month == "june" && (date >= 21 && date <=  30 )) || (month == "april" && (date >= 1 && date <=  22 ))  )
    { zodiacSign = "Cancer";}
    else if ( (month == "july" && (date >= 23 && date <=  31 )) || (month == "august" && (date >= 1 && date <=  22 )) )
    { zodiacSign = "Leo";}
    else if ( (month == "august" && (date >= 23 && date <=  31 )) || (month == "september" && (date >= 1 && date <=  22 )) )
    { zodiacSign = "Virgo";}
    else if ( (month == "september" && (date >= 23 && date <=  30 )) || (month == "october" && (date >= 1 && date <=  22 )) )
    { zodiacSign = "Libra";}
    else if ( (month == "october" && (date >= 23 && date <=  31 )) || (month == "november" && (date >= 1 && date <=  23 )) )
    { zodiacSign = "Scorpio" ;}
    else if ( (month == "november" && (date >= 22 && date <=  30 )) || (month == "december" && (date >= 1 && date <=  21 )) )
    { zodiacSign = "Sagittarius";}
    else if ( (month == "december" && (date >= 22 && date <=  31 )) || (month == "january" && (date >= 1 && date <=  19 )) )
    { zodiacSign = "Capricorn";}
    else if ( (month == "january" && (date >= 20 && date <=  31 )) || (month == "february" && (date >= 1 && date <= 18 )) )
    { zodiacSign = "Aquarius";}
    else if ( (month == "february" && (date >= 19 && date <=  29 )) || (month == "march" && (date >= 20 && date <=  31 )) ) 
    { zodiacSign = "Pisces"; }
    else
    cout<<"Invalid month.";
    return zodiacSign;
}