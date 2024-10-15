#include <iostream>
using namespace std;

float calculatePerimeter(char, float);

main()
{
    char shape;
    float lengthOfSide;
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>> shape;
    cout<<"Enter the value: ";
    cin>> lengthOfSide;

    float perimeterOfShape = calculatePerimeter(shape, lengthOfSide);
    cout<<"The perimeter is: "<<perimeterOfShape;

}

float calculatePerimeter(char shape, float lengthOfSide)
{
    float perimeter ;
    if( shape == 's')
    {
        perimeter = lengthOfSide * 4;
    }
    else if( shape == 'c')
    {
        perimeter = lengthOfSide * 6.28;
    }
    else if( shape == 't')
    {
        perimeter = lengthOfSide * 3;
    }
    else if(shape == 'h' )
    {
        perimeter = lengthOfSide * 6;
    }

    return perimeter;
}