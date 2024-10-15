#include <iostream>
using namespace std;

string parityAnalysis(int);

main()
{
    int number;
    cout<<"Enter a 3-digit number: ";
    cin>> number;


    string checkParity = parityAnalysis(number);
    cout<<""<<checkParity;
}

string parityAnalysis(int number)
{
    string checkParity;
    int result1 = number%2;
    int digit1 = number/100;
    int digit2 = (number/10)%10;
    int digit3 = number%10;
    int sumOfDigits = digit1 + digit2 +digit3;
    int result2 = sumOfDigits%2;
    if( result1 == result2)
    {
        checkParity = "True";
    }
    else
    {
        checkParity = "False";
    }
    return checkParity;

}