#include <iostream>
using namespace std;
void printTable(int);

int main()
{   
    int number;
    cout<<"Enter a number: ";
    cin>> number;

    printTable(number);
    
}

void printTable(int number) 
{
    int table = number;
    int multiplication;

    for ( int number = 1; number <= 10; number = number + 1)
    {
        multiplication = table * number;
        cout << table << " * " << number << "  = "<<multiplication <<endl;
    }

 
 
}