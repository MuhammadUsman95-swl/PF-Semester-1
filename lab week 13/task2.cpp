#include <iostream>
#include <fstream>
using namespace std;
int countCharacter(string);

main(){
    string fileName = "hello.txt";
    cout<<"Total number of characters: "<< countCharacter(fileName);
}

int countCharacter(string fileName){
    int count = 0;
    fstream file;
    string line;
    file.open(fileName, ios::in);
    while(!file.eof()){
    getline(file, line);
    int x=0;
    while(line[x] != '\0'){    
    count = count + 1;
    x =x + 1;
    }
    }
    file.close();
    return count;
}