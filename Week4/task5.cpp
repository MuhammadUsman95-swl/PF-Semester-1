#include <iostream>
using namespace std;
void checkForBonus(int,int);

main()
{
int yourPosition ,friendPosition;
cout<<"Enter your position : ";
cin>> yourPosition;
cout<<"Enter your friend's position: ";
cin>> friendPosition;

checkForBonus(yourPosition,friendPosition);
}

void checkForBonus(int yourPosition,int friendPosition)
{
  if(friendPosition-yourPosition <= 6)
  { cout<<"True";}
  if(friendPosition-yourPosition > 6)
  { cout<<"False";} 

}