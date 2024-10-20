#include <iostream>
using namespace std;

void numberAmplifier(int); 


main() 
{
    int number;
    cout<< "Enter the higher bound (num >= 1): ";
    cin>> number; 

    numberAmplifier(number);

    return 0;
}

void numberAmplifier(int number) 
{
    for (int x = 1; x <= number; x = x + 1) 
    {
        if (x % 4 == 0) {
            int amplifiedNumber = x * 10;
            cout<<", "<<amplifiedNumber;
        } else {
            cout<<", "<<x;         
        }
    }
}
