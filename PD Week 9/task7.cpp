#include <iostream>
using namespace std;

int countCommonCharacters(string, string);

main(){
    string s1, s2;

    cout<<"Enter the first string: ";
    cin>> s1;
    cout<<"Enter the second string: ";
    cin>> s2;

    int commonCount = countCommonCharacters(s1, s2);

    cout<<"Number of common characters: "<<commonCount<<endl;

    return 0;
}

int countCommonCharacters(string s1, string s2) {
    int count = 0;
    int frequency1[26] = {0}; 
    int frequency2[26] = {0}; 

    for (int i = 0; s1[i] != '\0'; i = i + 1) {
        frequency1[s1[i] - 'a'] = frequency1[s1[i] - 'a'] + 1;
    }

    for (int i = 0; s2[i] != '\0'; i = i + 1) {
        frequency2[s2[i] - 'a'] = frequency2[s2[i] - 'a'] + 1;
    }

    for (int i = 0; i < 26; i++) {
        if (frequency1[i] > 0 && frequency2[i] > 0) {
            if (frequency1[i] < frequency2[i]) {
                count = count + frequency1[i];
            } else {
                count = count + frequency2[i];
            }
        }
    }

    return count;
}
