#include <iostream>
using namespace std;

void evenOddTransform(int [], int, int);

main(){
    int times;
    int size;
    
    cout<<"Enter the number of elements in the array: ";
    cin>> size;
    int array[size];
    
    cout<<"Enter the array: "<<endl;
    for (int i = 0; i < size; i = i + 1) {
        cin>> array[i];
    }
    
    cout<<"Enter number of times even-odd transformation need to be done: ";
    cin>> times;
    
    evenOddTransform(array, size, times);

    cout<<"Transformed array: [";
    for (int i = 0; i < size; i = i + 1) {
        cout << array[i];
        if (i != size - 1) {
            cout << ", ";
        }
    }
    cout<<"]" <<endl;
}

void evenOddTransform(int array[], int size, int times) {
    for (int i = 0; i < times; i = i + 1) {
        for (int j = 0; j < size; j = j + 1) {
        if (array[j] % 2 == 0) { 
        array[j] = array[j] - 2;
        } else {  
        array[j] = array[j] + 2;
        }
    }
    }
}