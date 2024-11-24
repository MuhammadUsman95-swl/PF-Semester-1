#include <iostream>
using namespace std;

bool areEqual(string [], int);



main() {
    int size = 4;
    string array[size];

    cout<<"Enter 4 elements: "<<endl;
    for (int i = 0; i < size; i = i + 1){
        cin>> array[i];
    }

    if (areEqual(array, size) == true){
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
}
bool areEqual(string array[], int length){
    bool flag;
    for(int i = 0; i < length; i = i + 1)
    {
        if(array[0] == array[i] )
        {
            flag = true;
        }
        else{
            flag = false;
        }
    }
    return flag;
}

    