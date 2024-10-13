#include <iostream>
using namespace std;

string checkPointPosition(int, int, int);

main()
{
    int height, xCoordinate, yCoordinate;
    cout<<"Enter height: ";
    cin>> height;
    cout<<"Enter x coordinate: ";
    cin>> xCoordinate;
    cout<<"Enter y coordinate: ";
    cin>> yCoordinate;

    string pointLocation = checkPointPosition(height, xCoordinate, yCoordinate);
    cout<<"Location of point is: "<<pointLocation;
}

string checkPointPosition(int height, int xCoordinate, int yCoordinate)
{
    string pointPosition ;
    if( height <= 2 )
    {
        if((xCoordinate > 0 && xCoordinate < (4 * height)) && (yCoordinate > 0 && yCoordinate < height))
        { pointPosition = "Inside";}
        else if( xCoordinate == 0 || yCoordinate == 0 || xCoordinate == (4 * height) || yCoordinate == height )
        { pointPosition = "Border";}
        else
        { pointPosition = "Outside";}
    }
    else if( height > 2 )
    {
        if((xCoordinate > height && (xCoordinate < (2 * height))) && (yCoordinate > height && yCoordinate < (height * 4)))
        { pointPosition = "Inside";}
        else if( xCoordinate == height || yCoordinate == height || xCoordinate == 2 * height || yCoordinate == 4 * height )
        { pointPosition = "Border";}
        else
        { pointPosition = "Outside";}
    }    return pointPosition;
}