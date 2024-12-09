#include <iostream>
#include <fstream>
using namespace std;
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count,float per[]);
void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string x,float per[]);
main()
{
    int count = 0;
    int size = 100;
    string names[size];
    int ages[size];
    float matricMarks[size];
    float fscMarks[size];
    float ecatMarks[size];
    float per[size];
    getStudentDetails(names, ages, matricMarks, fscMarks, ecatMarks, size, count,per);
    
    saveToFile(names, ages, matricMarks, fscMarks, ecatMarks, count, "studentData.txt",per);
    
    
    
    
    
}
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count,float per[])
{

    string option;
    while (option != "No")
    {
        cout << "Do you want to enter Data : ";
        cin >> option;
        if (option == "No")
        {
            break;
        }
        if (option == "yes")
        {
            cout << "Enter Student " << count + 1 << " details:\n";
            cout << "Enter your Name : ";
            cin >> names[count];
            cout << "Enter your age : ";
            cin >> ages[count];
            cout << "Enter your Matric marks : ";
            cin >> matricMarks[count];
            cout << "Enter your FSC marks : ";
            cin >> fscMarks[count];
            cout << "Enter your Ecat marks : ";
            cin >> ecatMarks[count];
            cout << "Enter your percentage : ";
            cin >> per[count];
            count++;
        }
    }
}

void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string x,float per[])
{
    fstream myFile;
    myFile.open(x, ios::out);
    for (int i = 0; i < count; i++)
    {
        if(per[i]>70)
        {
        myFile << "Student Name is : " << names[i] << endl;
        myFile << "Student age is : " << ages[i] << endl;
        myFile << "Student matrc marks are : " << matricMarks[i] << endl;
        myFile << "Student fsc marks are : " << fscMarks[i] << endl;
        myFile << "Student ecat are : " << ecatMarks[i] << endl;
        myFile << "Student percentage is : " << per[i] << endl;
        }
    }
    myFile.close();
}