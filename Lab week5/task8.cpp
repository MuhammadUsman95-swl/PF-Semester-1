#include <iostream>
using namespace std;

int checkEvenOdd(int);
main()  
{
    int number;
    cout<<"Enter a five digit number: ";
    cin>> number;

    checkEvenOdd(number);
}

int checkEvenOdd(int number)
{
    int digit1=number%10;
    int digit2=(number/10)%10;
    int digit3=(number/100)%10;
    int digit4=(number/1000)%10;
    int digit5=(number/10000)%10;
    int add=digit1+digit2+digit3+digit4+digit5;
    if( add%2 == 0 )
    {
     cout<<"Evenish";   
    }
    else
    {
     cout<<"Oddish";   
    }    
}