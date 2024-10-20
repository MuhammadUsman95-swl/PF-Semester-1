#include <iostream>
using namespace std;

int dotsForTringule(int);

int main() {
    int number;
    cout<<"Enter number of triangle: ";
    cin>> number;
    
    int dotNumber = dotsForTringule(number);
    cout<<"Dots number of triangle: "<<dotNumber;
}

int dotsForTringule(int number)
{ 
    int triangularNumber = 0;
    for(int x = 1; x <= number; x = x + 1)
    {
        int sum = sum + 1;
        triangularNumber = triangularNumber +sum;
    }
    return triangularNumber;
}