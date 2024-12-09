#include <iostream>
#include <fstream>
using namespace std;
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count);
void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string x, int size);
main()
{
    int count = 0;
    int size = 100;
    string names[size];
    int ages[size];
    float matricMarks[size];
    float fscMarks[size];
    float ecatMarks[size];
    getStudentDetails(names, ages, matricMarks, fscMarks, ecatMarks, size, count);
    saveToFile(names, ages, matricMarks, fscMarks, ecatMarks, count, "studentData.txt", size);
}
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count)
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
            count++;
        }
    }
}

void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string x, int size)
{
    fstream myFile;
    myFile.open("studentData.txt", ios::out);
    for (int i = 0; i < count; i++)
    {
        myFile << "Student Name is : " << names[i] << endl;
        myFile << "Student age is : " << ages[i] << endl;
        myFile << "Student matrc marks are : " << matricMarks[i] << endl;
        myFile << "Student fsc marks are : " << fscMarks[i] << endl;
        myFile << "Student ecat are : " << ecatMarks[i] << endl;
    }
    myFile.close();
}