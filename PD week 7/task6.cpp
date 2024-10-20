#include <iostream>
using namespace std;

int checkPrime(int);
int primorial(int);

main()
{
    int number;
    cout<<"Enter a number: ";
    cin>> number;

    int result = primorial(number);
    cout<<"Primorial is: "<<result;
}

int checkPrime(int number)
{
    int divisorCount = 0;

    for (int x = 2; x <= number/2 ; x = x + 1)
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

int primorial(int number)
{
    int primorialProduct = 1; 
    int primeCount = 0;   
    int currentNumber = 2; 

    while (primeCount < number)
    {

        if(checkPrime(currentNumber) == 1)
        {
            primorialProduct = primorialProduct * currentNumber; 
            primeCount = primeCount + 1; 
        }
        currentNumber = currentNumber + 1 ; 
    }

    return primorialProduct;
}
