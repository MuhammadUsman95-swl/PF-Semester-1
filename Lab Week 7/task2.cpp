#include <iostream>
using namespace std;

void generateFibonacci(int);

main()
{
    int length;
    cout<<"Enter the lenght of fibonnci series: ";
    cin >> length;

    generateFibonacci(length);
}

void generateFibonacci(int length)
{
    int number1 = 0, number2 = 1, nextTerm;

    for (int x = 1; x <= length; x = x+1)
    {
        cout << number1 << ", "; 
        nextTerm = number1 + number2; 
        number1 = number2; 
        number2 = nextTerm;
    }
    cout << endl;
}