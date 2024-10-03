#include <iostream>
using namespace std;

int calculatePoolState(int,int,int,float);

main()
{
    int volume,pressure1,pressure2;
    float absentHours;
    cout<<"Enter volume of pool in liters: ";
    cin>> volume;
    cout<<"Enter flow rate of first pipe per hour:";
    cin>> pressure1;
    cout<<"Enter flow rate of second pipe: ";
    cin>> pressure2;
    cout<<"Enter hours that the worker is absent: ";
    cin>> absentHours;

    calculatePoolState(volume,pressure1,pressure2,absentHours);
}

int calculatePoolState(int volume,int pressure1,int pressure2,float absentHours)
{
    float bothFill=(pressure1*absentHours)+(pressure2*absentHours);
    int percentage=(bothFill/volume)*100;
    int percentage1=((pressure1*absentHours)/bothFill)*100;
    int percentage2=100-percentage1;
    if( percentage > 100)
    {
      int overFlow=bothFill-volume;
      cout<<"For "<<absentHours<<" hours, the pool overflow with "<<overFlow<<" liters.";  

    }
    else
    {
     cout<<"The pool is "<<percentage<<"% full."<<"Pipe 1: "<<percentage1<<"%. Pipe 2: "<<percentage2 <<"%.";  

    }

}
