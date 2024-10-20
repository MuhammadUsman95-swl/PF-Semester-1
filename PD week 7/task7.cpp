#include <iostream>
using namespace std;

void doctorCalculation(int period) 
{
    int doctors = 7; 
    int treatedPatients = 0;
    int untreatedPatients = 0;

    for (int day = 1; day <= period; day = day + 1) 
    {
        if(day % 3 == 0) 
        {
            if (untreatedPatients > treatedPatients) 
            {
                doctors = doctors +1; 
            }
        }

        int patientsToday;
         cout<<"Enter the number of patients for day " <<day <<": ";
         cin>> patientsToday;
        if(patientsToday > doctors) 
        {
            treatedPatients = treatedPatients + doctors;
            untreatedPatients = untreatedPatients + (patientsToday - doctors);
        } 
        else if((patientsToday <= doctors)) 
        {
            treatedPatients = treatedPatients+patientsToday;
        }

    }

    cout<<"Treated patients: "<<treatedPatients<<"."<<endl;
    cout<<"Untreated patients: "<< untreatedPatients<<"."<<endl;
}

main() 
{
    int period;
    cout << "Enter number of days you visited ospital: ";
    cin >> period;


    if (period < 1 || period > 1000) {
    cout << "Invalid period. Please enter a number between 1 and 1000." << std::endl;
         
    }

    doctorCalculation(period);
}
