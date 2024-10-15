#include <iostream>
using namespace std;

string greaterNumber(int ,int);

int main()
{
    int number1, number2;
    cout<<"Enter first number: ";
    cin>> number1;
    cout<<"Enter second number: ";
    cin>> number2;

    string checkGreaterNumber = greaterNumber(number1, number2);
    cout<<""<<checkGreaterNumber;

    return 0;
}

string greaterNumber(int number1, int number2)
{
    string result;
    if(number1 > number2)
    {
    result = "True";
    }
    else
    {
    result = "false";
    }
    return result;
}

