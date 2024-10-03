#include <iostream>
#include <cmath>
using namespace std;

float treeHeight(float, float);

int main()
{
    float distance, angle,height;
    cout<<"Enter horizonral distance from base of tree(in feet): ";
    cin>> distance;
    cout<<"Enter the angle of elevation: ";
    cin>> angle;
    angle=angle/57.2958;
    
    height = treeHeight(distance,angle);
    cout<<"The height of tree is : "<<height;
}

float treeHeight(float distance, float angle)
{
    
    float height=distance*tan(angle);
    return height;
}