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
    int triangularNumber = (number)*(number+1)/2;
    return triangularNumber;
}