#include <iostream>
using namespace std;

int calculateLCM(int, int);
int calculateHCF(int, int);

main(){
    int number1, number2;
    cout<<"Enter the first number: ";
    cin>> number1;
    cout<<"Enter the second number: ";
    cin>> number2;

    int hcf = calculateHCF( number1, number2 );
    int lcm = calculateLCM( number1, number2 );

    cout<<"HCF: "<<hcf<<endl;
    cout<<"LCM: "<<lcm;
}

int calculateHCF(int number1, int number2)
{
    while (number2 != 0) {
        int x = number2;        
        number2 = number1 % number2;
        number1 = x;
    }
    return number1;
}
int calculateLCM(int number1, int number2)
{
    int lcm = (number1*number2)/calculateHCF(number1, number2);
    return lcm;
}