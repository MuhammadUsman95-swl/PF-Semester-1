#include <iostream>
using namespace std;

int checkFrequency(int, int);

main()
{
    int number;
    int digit;
    cout<<"Enter a number: ";
    cin>> number;
    cout<<"Enter the digit to check: ";
    cin>> digit;
    int frquencyOfDigit = checkFrequency(number, digit);
    cout<<"Frequency of "<<digit<<" in the number "<<number <<" is: "<<frquencyOfDigit;

}

int checkFrequency(int number, int digit)
{
   int countDigit = 0;
   while(number > 0)
   {
    int checkDigit = number%10;
    if(checkDigit  == digit)
    {
    countDigit = countDigit + 1;
    } 
    number = number / 10;
   } 
   return countDigit;
}