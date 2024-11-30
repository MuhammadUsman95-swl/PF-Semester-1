#include <iostream>
using namespace std;
void matrix(int [][5]);
main(){
    const int rowSize = 5;
    const int columnSize = 5;
    int cars[rowSize][columnSize] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}, 
    };
    matrix(cars);
}

void matrix(int cars[][5]){
    for(int i = 0; i < 5; i = i + 1){
        for(int j= 0; j < 5; j = j + 1){
            cout<<cars[i][j]<<"\t";
        }
        cout<<endl;
    }

}