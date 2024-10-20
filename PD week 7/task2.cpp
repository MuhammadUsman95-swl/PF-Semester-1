#include <iostream>
using namespace std;

void columnOfStar1(int);
void columnOfStar2(int);

main()
{
    int numberOfRows;
    cout<<"Enter number of rows: ";
    cin>> numberOfRows;

    columnOfStar1(numberOfRows);
    columnOfStar2(numberOfRows);

}

void columnOfStar1(int numberOfRows)
{
    for(int row = 0; row <= numberOfRows/2; row = row + 1)
    {
        for(int space = numberOfRows/2; space >= row; space = space - 1)
        {
            cout<<" ";
        }

        for(int column = 0; column <= row ; column = column + 1)
        {
            cout<<"*";
        }
            cout<<""<<endl;
    }

}

void columnOfStar2(int numberOfRows)
{
    for(int row = numberOfRows/2; row >= 0; row = row - 1)
    {
        for(int space = numberOfRows/2; space >= row; space = space - 1)
        {
            cout<<" ";
        } 
        for(int column = 0; column <= row;  column = column + 1)
        {
            cout<<"*";
        }
            cout<<""<<endl;
    }
}