#include <iostream>
using namespace std;

string checkTitle(int, char);

main()
{
    int age;
    char gender;
    cout<<"Enter your age: ";
    cin>> age;
    cout<<"Enter your gender (m/f): ";
    cin>> gender;

    string yourGenderTitle =  checkTitle(age, gender);
    cout<<"Your persinal title is: "<<yourGenderTitle;    
}

string checkTitle(int age, char gender)
{
    string genderTitle;
    if( age >= 16 && gender == 'm')
    {
        genderTitle = "Mr.";
    }
    else if( age < 16 && gender == 'm')
    {
        genderTitle = "Master";
    }
    else if( age >= 16 && gender == 'f')
    {
        genderTitle = "Ms.";
    }
    else if( age < 16 && gender == 'f')
    {
        genderTitle = "Miss";
    }
    return genderTitle;
}