#include <iostream>
using namespace std;

bool checkSameNumber(int, int, int);

main()
{
    int number1, number2, number3;
    cout<<"Enter the first number: ";
    cin>> number1;
    cout<<"Enter the second number: ";
    cin>> number2;
    cout<<"Enter the third number: ";
    cin>> number3;

    int sameNumber = checkSameNumber(number1,number2, number3);
    cout<<""<<sameNumber;
}

bool checkSameNumber(int number1, int number2, int number3)
{
    int result;
    if((number1 == number2) && (number2 == number3)  )
    {
        result = 1;
    }
    else
    {
        result = 0;
    }
    return result;
}