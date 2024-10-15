#include <iostream>
using namespace std;

float totalIncome(string, int, int);

main()
{
    string screenType;
    int row, column;
    cout<<"Enter Screen type (Premiere/Normal/Discount): ";
    cin>> screenType;
    cout<<"Enter the number of rows: ";
    cin>> row;
    cout<<"Enter the number of columns: ";
    cin>> column;

    float earnedIncome = totalIncome(screenType, row, column);
    cout<<"Total income is: "<<earnedIncome;

}

float totalIncome(string screenType, int row, int column)
{   
    float income;

    if( screenType == "premiere")
    {  
           income = row * column * 12;
    }

    else if( screenType == "normal")
    {  
           income = row * column  * 7.5;
    }

    else if( screenType == "discount")
    {  
           income = row * column  * 5;
    }

    return income;
}