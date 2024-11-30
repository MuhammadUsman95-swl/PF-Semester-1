#include <iostream>
using namespace std;
int printNissianCar(int [][5]);
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

    cout<<"Total number of Nissian cars of all compnies > "<<printNissianCar(cars);
    
}

int printNissianCar(int cars[][5]){
    int sum = 0;
    for(int x = 0; x < 5 ; x = x + 1){
        sum = sum + cars[2][x];
    }
    return sum;
}