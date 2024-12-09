#include <iostream>
#include <fstream>
using namespace std;

main(){
    fstream file;
    int integar;
    float decimal;
    char character;
    file.open("task2.txt", ios::in);
    
    file >> integar;
    file >> decimal;
    file >> character;
    file.close();
    cout<<integar <<endl <<decimal <<endl <<character;
}