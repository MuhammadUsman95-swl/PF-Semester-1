#include <iostream>
using namespace std;
main () {
int minutes;
int second;
int frame;
cout<<"Number of minutes: ";
cin>> minutes;
cout<<"Frame per second: ";
cin>> second;
frame=(minutes*60)*second;
cout<<"Total Number of frame: "<<frame;
}