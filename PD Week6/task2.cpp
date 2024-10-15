#include <iostream>
using namespace std;

float calculateAverage(float, float, float, float,float);
string calculateGrade(float, float, float, float,float);

main()
{
    float marksEnglish, marksMath, marksChemistry, marksSocialScience, marksBiology;
    string name;

    cout<<"Enter student name: ";
    cin>> name;
    cout<<"Enter marks for English:";
    cin>> marksEnglish;
    cout<<"Enter marks for Math:";
    cin>> marksMath;
    cout<<"Enter marks for Chemistry:";
    cin>> marksChemistry;
    cout<<"Enter marks for Social Science:";
    cin>> marksSocialScience;
    cout<<"Enter marks for Biology:";
    cin>> marksBiology;

    float percentage = calculateAverage(marksEnglish, marksMath, marksChemistry, marksSocialScience, marksBiology);
    string grade = calculateGrade(marksEnglish, marksMath, marksChemistry, marksSocialScience, marksBiology);
    cout<<"Student name: "<<name<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    cout<<"Grade: "<<grade<<endl;
}

float calculateAverage(float marksEnglish, float marksMath, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float average;
    average = (marksBiology + marksChemistry + marksEnglish + marksMath + marksSocialScience)/5; 
    return average;
}

string calculateGrade(float marksEnglish, float marksMath, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float average =  calculateAverage(marksEnglish, marksMath, marksChemistry, marksSocialScience, marksBiology);
    string asignGrade;
    if( average >= 90 && average <=100)
    {
        asignGrade = "A+";
    }
    else if( average >= 80 && average < 90)
    {
        asignGrade = "A";
    }
    else if( average >= 70 && average < 80)
    {
        asignGrade = "B+";
    }
    else if( average >= 60 && average < 70)
    {
        asignGrade = "B";
    }
    else if( average >= 50 && average < 60)
    {
        asignGrade = "C";
    }
    else if( average >= 40 && average < 50)
    {
        asignGrade = "D";
    }
    else if( average < 40 && average >= 0)
    {
        asignGrade = "F";
    
    }        
    return asignGrade;
}