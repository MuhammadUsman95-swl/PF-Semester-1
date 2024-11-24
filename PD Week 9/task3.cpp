#include <iostream>
using namespace std;

int calculateLength(string); 

main() {
    string input;
    cout<<"Enter a String: ";
    cin>> input; 

    int lengthOfString = calculateLength(input );

    
    if (lengthOfString % 2 == 0) {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
}

int calculateLength(string input) {
    int inputLength = 0;
    while (input[inputLength] != '\0') {
        inputLength = inputLength + 1;
    }
    return inputLength;
}