#include <iostream>
using namespace std;
int digitSum(int);

main()
{
    int number;
    cout<<"Enter a number: ";
    cin>> number;

    int sumOfDigit = digitSum(number);
    cout<<"Sum of digits: "<<sumOfDigit;

}

int digitSum(int number)
{
    int sum = 0, digit;
    while(number > 0)
    {
        digit = number%10;  
        sum = sum + digit;
        number = number / 10;
    }
    
    return sum;
}