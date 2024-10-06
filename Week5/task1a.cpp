#include <iostream>
using namespace std;
void myFunction();
int x=20;
void myFunction()
{

    cout<<"The vlaue of x is"<< x;
    int x=20;
}

main()
{
    myFunction;
    int x=20;
    cout<<"The value of x is: "<< x;
    myFunction;
}