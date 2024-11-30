#include <iostream>
using namespace std;
void printMatrix(float [3][3]);
bool isIdentity(float [3][3]);

main(){
    float matrix[3][3];
    cout<<"Enter elements of matrix ["<<3 <<"]["<<3 <<"]"<<endl;
    for(int i = 0; i < 3; i = i + 1){
        for(int j= 0; j < 3; j = j + 1){
            cout<<"Enter the element at position ["<<i <<"]["<<j <<"]: ";
            cin>> matrix[i][j];
        }
    }
    printMatrix(matrix);
    if(isIdentity(matrix)){
        cout<<"Matrix is identity."<<endl;
    }
    else if(!isIdentity(matrix)){
        cout<<"Matrix is not identity.";
    }

}
void printMatrix(float matrix[3][3]){
    for(int i = 0; i < 3; i = i + 1){
        for(int j= 0; j < 3; j = j + 1){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }

}
bool isIdentity(float matrix[3][3]){
    int count1 = 0, count2 =0;
    bool flag = false;
    for(int i = 0; i < 3;i = i + 1){
        for(int j= 0; j < 3; j = j + 1){
            if(i == j && matrix[i][j] == 1){
                count1 = count1 + 1;
            }
            else if(i != j && matrix[i][j] == 0){
                count2 = count2 + 1;
            }
        }
    }
    if(count1 == 3 && count2 == 6){
        flag = true;
    }
    else{
        flag = false;
    }
    return flag;
}