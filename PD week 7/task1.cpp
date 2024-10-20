#include <iostream>
using namespace std;

void columnOfStar(int);


main()
{
    int numberOfRows;
    cout<<"Enter number of rows: ";
    cin>> numberOfRows;

    columnOfStar(numberOfRows);

}

void columnOfStar(int numberOfRows)
{
    for(int row = numberOfRows; row >= 1; row = row - 1)
    {
        for(int column = 1;column <= row; column = column + 1)
        {
            cout<<"*";
        }
        cout<<""<<endl;
    }
    cout<<""<<endl;
}