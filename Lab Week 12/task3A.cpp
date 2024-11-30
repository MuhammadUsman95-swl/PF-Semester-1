#include <iostream>
using namespace std;
void printToyataBlueCar(int [][5]);
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
    printToyataBlueCar(cars);
}
void printToyataBlueCar(int cars[][5]){
    cout<<"Avaliable toyata blue cars > "<<cars[1][3];
}