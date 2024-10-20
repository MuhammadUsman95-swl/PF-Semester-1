#include <iostream>
using namespace std;

int checkPrime(int);

main()
{
    int number;
    cout<<"Enter a number: ";
    cin>> number;

    int result = checkPrime(number);
    cout<<""<<result;
}

int checkPrime(int number)
{
    int divisorCount = 0;

    for (int x = 2; x <= number / 2; x = x + 1)
    {
        if (number % x == 0)
        {
            divisorCount =  divisorCount + 1;
        }
    }

    if (divisorCount == 0 && number > 1)
    {  return 1;  }
    else
    {   return 0;  }
} 