#include <iostream>
#include <fstream>
using namespace std;
int countLines(string);

main(){
    string fileName = "hello.txt";
    cout<<"Total number of lines: "<< countLines(fileName);
}

int countLines(string fileName){
    int count = 0;
    fstream file;
    string line;
    file.open(fileName, ios::in);
    while(!file.eof()){
    getline(file, line);
    count = count + 1;
    }
    file.close();
    return count;
}