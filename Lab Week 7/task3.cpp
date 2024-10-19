# include <iostream>
using namespace std;
int digit(double);

main()
{
    double number;
    cout<<"Enter a number: ";
    cin>> number;

    int noOfdigits = digit(number);
    cout<<"Total number of digits: "<<noOfdigits;    

}

int digit(double number)
{
    
    int digit = 1;
    if(number<0)
    {
        number = -number;
    }

    while(number >= 10)
    {
    if(number >= 10){    
    number = number / 10;
    digit = digit + 1;
    }
    }
    return digit;
}