#include <iostream>
using namespace std;
float sum(int row);

main(){
    int row;
    cout<<"Enter number of rows of matrix: ";
    cin>> row;

    float matrixSum = sum(row);
    cout<<"Sum of all entries of matrix is: "<<matrixSum;

}

float sum(int row){
    float matrix[row][3], sum = 0;
    cout<<"Enter elements of matrix ["<<row <<"]["<<3 <<"]"<<endl;
    for(int i = 0; i < row; i = i + 1){
        for(int j= 0; j < 3; j = j + 1){
            cout<<"Enter the element at position ["<<i <<"]["<<j <<"]: ";
            cin>> matrix[i][j];
            sum = sum + matrix[i][j];
        }
    }
    return sum;

}