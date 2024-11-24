#include <iostream>
using namespace std;

main() {
    
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    char input[4];
    
    cout<<"Enter a 4-digit PIN: ";
    cin>> input;
    
    bool isValid = true;
    for (int i = 0; i < 4; i = i + 1) {
        if (input[i] < '0' || input[i] > '9') {
            isValid = false;
            break;
        }
    }
    
    if (!isValid) {
        cout<<"Invalid input."<<endl;
    }

    if(isValid){
        int digit = 0;
    for (int i = 0; i < 4; i = i + 1) {
        int digit = input[i] - '0';
        int moveIndex = (digit + i) % 10;
        cout<< moves[moveIndex];
        
        if (i != 3) {
            cout<<", ";
        }
    }
    cout<<endl;
    }
}
