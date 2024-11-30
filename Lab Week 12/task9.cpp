#include <iostream>
using namespace std;
int checkIdenticalRows(int,  int [][3]);

main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>> row;
    int  matrix[row][3];
    cout<<"Enter elements of matrix ["<<row <<"][3]"<<endl;
    for(int i = 0; i < row; i = i + 1){
        for(int j= 0; j < 3; j = j + 1){
            cout<<"Enter the element at position ["<<i <<"]["<<j <<"]: ";
            cin>> matrix[i][j];
        }
    }
    int identicalRows = checkIdenticalRows(row, matrix);
    cout<<"Number of identical rows: "<<identicalRows<<endl;

}

int checkIdenticalRows(int row, int matrix[][3]){
    int count = 0, j =0;
    
    for(int i = 0; i < row; i = i + 1){
    bool result = false;
    for(int j = 0; j < row; j = j + 1){
        if(j != i){        
        if((matrix[i][0] == matrix[j][0]) && (matrix[i][1] == matrix[j][1]) && (matrix[i][2] == matrix[j][2])){
            result = true;
        }
    }
    }
    if(result){
        count = count + 1;
    }
    }
    return count;
}