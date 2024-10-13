#include <iostream>
using namespace std;

string checkStudentStatus(int, int, int, int);

main()
{
    int examStartingMinute, examStartingHour, arrivalHour, arrivalMinute;
    cout<<"Enter exam starting time (hour): ";
    cin>> examStartingHour;
    cout<<"Enter exam starting time (minutes): ";
    cin>> examStartingMinute;
    cout<<"Enter student hour of arrival: ";
    cin>> arrivalHour;
    cout<<"Enter student minutes of arrival: ";
    cin>> arrivalMinute;


    int timeDifference = ((examStartingHour - arrivalHour)*60) + ( examStartingMinute - arrivalMinute);
    int hour = timeDifference/60;
    int minute = timeDifference%60;
    string studentStatus = checkStudentStatus(examStartingHour, examStartingMinute, arrivalHour, arrivalMinute);
    cout<<""<<studentStatus<<endl;

    if( timeDifference >= 0)
    {    
        if(timeDifference > 0 && timeDifference < 59 )
        {
            cout<<""<<timeDifference <<" minutes before the start.";
        }
        else if( timeDifference >= 60)
        {
            cout<<""<<hour <<" : "<<minute <<" hours before the start."; 
        }
    }    

    else if(timeDifference < 0)
    {
        timeDifference = -timeDifference;
        int hour = timeDifference/60;
        int minute = timeDifference%60;
        if( timeDifference < 60)
        {
            cout<<""<<minute <<" minutes after the start.";
        }
        else if( timeDifference >= 60)
        {
            cout<<""<<hour <<" : "<<minute <<" hours after the start.";
        }
    }

}

string checkStudentStatus(int examStartingHour, int examStartingMinute, int arrivalHour, int arrivalMinute)
{
    string studentStatus;
    int timeDifference = ((examStartingHour - arrivalHour)*60) + ( examStartingMinute - arrivalMinute);

    if( timeDifference >= 0)
    {
        if(timeDifference <= 30)
        { 
            studentStatus ="On time";
        }
        else if( timeDifference > 30)
        {
            studentStatus = "Early";
        }

    }

    else if ( timeDifference < 0)
    {
        studentStatus = "Late";
    } 

    return studentStatus;   
}