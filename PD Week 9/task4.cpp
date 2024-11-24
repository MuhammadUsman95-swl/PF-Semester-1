#include <iostream>
using namespace std;

bool containsSeven(int);

main() {
    int size;
    cout<<"Enter the number of elements in the array: ";
    cin>>size;

    int numbers[size];

    cout << "Enter "<<size <<" numbers: "<<endl;
    for (int i = 0; i < size; i = i + 1){
        cin>> numbers[i];
    }

    bool hasSeven = false;
    for (int i = 0; i < size; i = i + 1){
        int x = numbers[i];
        if (containsSeven(x) == true){
            hasSeven = true;
            break;
        }
    }

    if (hasSeven) {
        cout<<"Boom!"<<endl;
    } else {
        cout<<"there is no 7 in the array"<<endl;
    }
}

bool containsSeven(int number){
    while (number > 0) {
        if (number % 10 == 7) {
            return true;
        }
        number = number / 10;
    }
    return false;
}