#include <iostream>
using namespace std;

int calculateVolleyBallGame(string, float, float);

main()
{
    string yearType;
    float noOfHoliday, homeWeekend;
    cout<<"Enter the year type(normal/leap): ";
    cin>> yearType;
    cout<<"Enter number of holidays: ";
    cin>> noOfHoliday;
    cout<<"Enter number of weekends: ";
    cin>> homeWeekend;

    int playVollyBall = calculateVolleyBallGame(yearType, noOfHoliday, homeWeekend);
    cout<<"Number of times Vladmir will play VollyBall: "<<playVollyBall;
}

int calculateVolleyBallGame(string yearType, float noOfHoliday, float homeWeekend)
{
    float playVollyBallTimes;
    if( yearType == "leap")
    {
        playVollyBallTimes = ((48 - homeWeekend) * 3/4) + ( noOfHoliday * 2/3) + homeWeekend ;
        playVollyBallTimes   = playVollyBallTimes + (playVollyBallTimes * 0.15);
    }
    else if( yearType == "normal")
    {
        playVollyBallTimes = ((48 - homeWeekend) * 3/4) + ( noOfHoliday * 2/3) + homeWeekend ;
        playVollyBallTimes;
    }

    return playVollyBallTimes;
}