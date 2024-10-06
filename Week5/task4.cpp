#include <iostream>
using namespace std;

int projectTimeCalculation(int,int,int);

int main()
{
    int neededHours,days,numberOfWorkers;
    cout<<"Enter the needed hours: ";
    cin>> neededHours;
    cout<<"Enter the days that firm has: ";
    cin>> days;
    cout<<"Enter the number of all workers: ";
    cin>> numberOfWorkers;

    int projectCalculation1 = projectTimeCalculation(neededHours, days, numberOfWorkers);
    if( neededHours - projectCalculation1 > 0)
    {
        cout<<"No enough time!"<<neededHours - projectCalculation1 <<" hours needed.";
    }
    else
    {
      int projectCalculation2 = projectCalculation1 - neededHours;
      cout<<"Yes!"<<projectCalculation1 - neededHours <<" hours left.";
    }
    return 0;
}

int projectTimeCalculation(int neededHours,int days, int numberOfWorkers)
{
    float projectTimeCalculations = 9*days*numberOfWorkers;
    return projectTimeCalculations;
}