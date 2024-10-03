#include <iostream>
using namespace std;
void checkSymmetry(int);

main()
{
    int number;
    cout<<"Enter a three digit number: ";
    cin>> number;
    checkSymmetry(number);
}

void checkSymmetry(int number)
{
    int digit1=number%10;
    int digit2=number/100;
    if(digit1 == digit2)
    {cout<<"Number is symmetrical.";}
    else
    {cout<<"Number is not symmetrical.";}

}