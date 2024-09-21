#include <iostream>
using namespace std;
main () {
float initial_velocity;
float acceleration;
float time;
float final_velocity;
cout<<"Enter initial velocity (m/s): ";
cin>> initial_velocity;
cout<<"Enter acceleration (m/s^2): ";
cin>> acceleration;
cout<<"Enter time (t): ";
cin>> time;
final_velocity=initial_velocity + acceleration*time;
cout<<"Final velocty (m/s):" <<final_velocity;
}