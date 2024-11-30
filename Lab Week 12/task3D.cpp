#include <iostream>
using namespace std;
int converter(int [][5], string);
main(){
    string color;
    cout<<"Enter a color(Red, Black, Brown, Blue, Gray) > ";
    cin>> color;
    const int rowSize = 5;
    const int columnSize = 5;
    int cars[rowSize][columnSize] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}, 
    };

    cout<<"Total number of "<<color << " cars > " <<converter(cars, color);
    
}

int converter(int cars[][5], string color){
    string colors[5] = {"Red", "Black", "Brown", "Blue", "Gray"};
    int index, sum = 0;
    for(int i =0; i < 5; i = i+1){
        if(colors[i] == color){
            index = i;
        }
    }
    for(int x = 0; x < 5 ; x = x + 1){
        sum = sum + cars[x][index];
    }
    return sum;
}