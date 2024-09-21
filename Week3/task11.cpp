#include <iostream>
using namespace std;
main () {
int person_age;
cout<<"Enter the age of person: ";
cin>> person_age;
int moved_times;
cout<<"Enter the number of times he moved: ";
cin>> moved_times;
int average_lived_years;
average_lived_years=person_age / (moved_times+1);
cout<<"Avearge number of years lived in the same house: "<< average_lived_years;
}