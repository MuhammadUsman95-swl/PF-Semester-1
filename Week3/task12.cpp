#include <iostream>
using namespace std;
main () { 
int painting_ability;
cout<<"Number of square meter you can: ";
cin>> painting_ability;
int width;
cout<<"Width of single wall (in meters): ";
cin>> width;
int height;
cout<<"Height of single wall  (in meters)" ;
cin>> height;
int painted_walls=painting_ability/(width*height);
cout<<"Number of walls you can paint: "<<painted_walls;
}