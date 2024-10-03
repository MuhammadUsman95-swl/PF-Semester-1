#include <iostream>
using namespace std;
void checkAlpabetCase(string);

main()
{
    string character;
    cout<<"Enter a character (A/a): ";
    cin>> character;

    checkAlpabetCase(character);
}

void checkAlpabetCase(string character)
{
    if( character == "A")
     {cout<<"You have entered capital A";}
    if(character == "a")
     {cout<<"You have entered small a";}
}