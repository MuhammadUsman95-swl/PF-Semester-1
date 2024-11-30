#include <iostream>
using namespace std;
string checkFire(string);

main(){

    string coordinate;
    cout<<"Enter coordinates for fire (e.g A3, C1, D4): ";
    cin>> coordinate;  
    string fireResult = checkFire(coordinate);
    cout<<"Result of your fire > "<<fireResult;
}

string checkFire(string coordiates){
    string result;
    char battleShip[5][5] =   {
                            {'.', '.', '.', '*', '*'},
                            {'.', '*', '.', '.', '.'},
                            {'.', '*', '.', '.', '.'},
                            {'.', '*', '.', '.', '.'},
                            {'.', '.' ,'*', '*', '.'},
                              };
    int i,j;
    i = coordiates[0]-'A';
    j = coordiates[1]-'1';
    if(battleShip[i][j] == '.'){
        result = "splash";
    }
    else if(battleShip[i][j] == '*'){
        result = "BOOM!!";
    }
    return result;    
}