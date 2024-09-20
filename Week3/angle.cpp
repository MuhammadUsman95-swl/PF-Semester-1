#include <iostream>
using namespace std;
main () {
int sides;
int angles;
cout<<"Enter the number sides of polygon :";
cin>> sides;
angles=(sides-2)*180;
cout<<"The integral angles of a "<<sides <<"-sided polygons is:"<<angles <<"degree";
}