#include <iostream>
using namespace std;
void getLargestFirst(int [][5], int);
void printMatrix(int [][5], int, int);

main(){
    int row;
    cout<<"Enter number of rows: ";
    cin>> row;
    int matrix[row][5];
    cout<<"Enter elements of matrix ["<<row <<"]["<<5 <<"]"<<endl;
    for(int i = 0; i < row; i = i + 1){
        for(int j= 0; j < 5; j = j + 1){
            cout<<"Enter the element at position ["<<i <<"]["<<j <<"]: ";
            cin>> matrix[i][j];
        }
    }
    for(int i = 0; i < row; i = i + 1){
        for(int j= 0; j < 5; j = j + 1){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

        getLargestFirst(matrix, row);
} 

void getLargestFirst(int matrix[][5], int row){
    int max = -1000, maxColumn;
    for(int i = 0; i < 5; i = i + 1){
        int sum = 0;
        for(int j= 0; j < row ; j = j + 1){
            sum = sum + matrix[j][i];
        }
        if(sum > max){
        max = sum;
        maxColumn = i; 
        }
        
    }
    if(maxColumn == 0){
        cout<<"No need to shift any row."<<endl;
        for(int i = 0; i < row; i = i + 1){
        for(int j= 0; j < 5; j = j + 1){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    }
    else{
        cout<<"Shifted matrix :"<<endl;
        printMatrix(matrix,row,maxColumn);
    }
}
void printMatrix(int matrix[][5], int row, int maxColumn)    
{
    int temp[row];
        for(int i = 0; i <= maxColumn; i = i + 1){
        temp[i] = matrix[i][maxColumn];
        }
    for(int i = 0; i < row ; i = i  + 1){
        for(int x = maxColumn; x >= 0; x= x - 1){
            matrix[i][x] = matrix[i][x-1];
        }
        matrix[i][0] = temp[i];
    }

    for(int i = 0; i < row; i = i + 1){
        for(int j= 0; j < 5; j = j + 1){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}
