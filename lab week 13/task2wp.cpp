#include <iostream>
#include <fstream>
using namespace std;

main(){
    fstream file;
    int integar;
    float decimal;
    char character;
    file.open("task2.txt", ios::out);
    cout<<"Enter an integar: ";
    cin>> integar;
    cout<<"Enter a decimzl number: ";
    cin>> decimal;
    cout<<"Enter a character: ";
    cin>> character;
    file << integar<<endl;
    file << decimal<<endl;
    file << character<<endl;
    file.close();
}