#include <iostream>
#include <cmath>

using namespace std;

void realRoot(int a,int b,int c);
void equalRoot(int a,int b,int c);
void complexRoot(int a,int b,int c);
main()
{
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>> a;
    cout<<"Enter the value of b: ";
    cin>> b;
    cout<<"Enter the value of c: ";
    cin>> c;

    realRoot(a,b,c);
    equalRoot(a,b,c);
    complexRoot(a,b,c);

}

void realRoot(int a,int b,int c)
{
    float discrimenant = b*b-4*a*c;
    if(discrimenant > 0 )
    {
       float root1=(-b+sqrt(discrimenant))/(2*a);
       float root2=(-b-sqrt(discrimenant))/(2*a);
        cout<<"Solutions: x="<<root1<<" and "<<" x="<<root2;
    }
}

void equalRoot(int a,int b,int c)
{
    float discrimenant = b*b-4*a*c;
    if( discrimenant == 0 )
    {
       float root1=-b/(2*a);
        cout<<"Solution: x="<<root1;
    }
}

void complexRoot(int a,int b,int c)
{
    float discrimenant = b*b-4*a*c;
    if( discrimenant < 0 )
    {
       float root1=-b/(2*a);
       float root01=sqrt(-discrimenant)/(2*a);
       float root2=-b/(2*a);
       float root02=sqrt(-discrimenant)/(2*a);
        cout<<"Complex solutions: x="<< root1<<"+"<<root01 <<"i and "<<" x="<< root2<<"-"<<root02<<"i";
    }
}
