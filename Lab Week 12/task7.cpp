#include <iostream>
using namespace std;
void isGoalScored(string field, char golaField[6][7]);
main(){
    char golaField[6][7] =   {
                            {'#', ' ', ' ', ' ', ' ', ' ', '#'},
                            {'#', ' ', ' ', ' ', ' ', ' ', '#'},
                            {'#', '#', '#', '#', '#', '#', '#'},
                            {' ', ' ', ' ', '#', ' ', ' ', ' '},
                            {' ', ' ', ' ', '#', ' ', ' ', ' '},
                            {' ', ' ', ' ', '#', ' ', ' ', ' '},
                              };
    for(int i = 0; i < 6; i = i + 1){
        for(int j= 0; j < 7; j = j + 1){
            cout<<golaField[i][j];
        }
        cout<<endl;
    }
    cout<<endl;                          
    string field;
    cout<<"Enter field (x coordinate(0-5), y coordinate(0-6) (e.g 23, 42,00) > ";
    cin>> field;
    isGoalScored(field, golaField);
}

void isGoalScored(string field, char golaField[6][7]){
    bool result;
    int x = field[0]-'0';
    int y = field[1]-'0';
    for(int i = 0; i < 6; i = i + 1){
        for(int j= 0; j < 7; j = j + 1){
            if(i == x && j == y){
             cout<<"0";   
            }
            else{
            cout<<golaField[i][j];
            }
        }
        cout<<endl;
    }
    if((x >=0 && x < 3) && (y >= 0 && y < 7)){
        cout<<"Congradulation! Goal is scored.";
    }
    else{
        cout<<"Goal is not scored.";
    }
}