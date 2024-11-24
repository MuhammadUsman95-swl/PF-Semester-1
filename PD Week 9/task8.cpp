#include <iostream>
using namespace std;

int calculateColoringTime(string [], int);

main(){
    int number;
    cout<<"Enter the number of colors: ";
    cin>> number;
    
    string colours[number];
    
    cout<<"Enter the colors for the squares: "<<endl;
    for (int i = 0; i < number; i = i + 1){
        cin>> colours[i];
    }

    int time = calculateColoringTime(colours, number);
    cout<<"Time to color the pattern: "<<time <<" seconds"<<endl;
}

int calculateColoringTime(string colours[], int n) {
    int time = 0;
    time = time + (2 * n);

    for (int i = 1; i < n; i = i + 1) {
        if (colours[i] != colours[i - 1]) {
            time = time + 1;
        }
    }

    return time;
}
