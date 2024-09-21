#include <iostream>
using namespace std;
main () {
int four_digit_number;
cout<<"Enter a 4-digit number: ";
cin>> four_digit_number;
int number1=four_digit_number%10;
int digit2=four_digit_number/10;
int number2=digit2 %10;
int digit3=digit2 /10;
int number3=digit3 %10;
int digit4=digit3 /10;
int number4=digit4 %10;
float sum=number1+number2+number3+number4;
cout<<"Sum of the individual digits: "<<sum;
}