#include <iostream>
using namespace std;
string numberToWords(int);

int main() {
    int number;
    cout << "Enter a number between 1 and 99: ";
    cin >> number;

    numberToWords(number);
    return 0;

}

string numberToWords(int number)
 {
    if (number == 1) { cout<<"One";};
    if (number == 2) {cout<<"Two";}
    if (number == 3) {cout<<"Three";}
    if (number == 4) {cout<<"Four";}
    if (number == 5) {cout<<"Five";}
    if (number == 6) {cout<<"Six";}
    if (number == 7) {cout<<"Seven";}
    if (number == 8) {cout<<"Eight";}
    if (number == 9) {cout<<"Nine";}
    if (number == 10){cout<<"Ten";}
    if (number == 11){cout<<"Eleven";}
    if (number == 12) {cout<<"Twelve";}
    if (number == 13) {cout<<"Thirteen";}
    if (number == 14) {cout<<"Fourteen";}
    if (number == 15){cout<<"Fifteen";}
    if (number == 16) {cout<<"Sixteen";}
    if (number == 17){cout<<"Seventeen";}
    if (number == 18) {cout<<"Eighteen";}
    if (number == 19) {cout<<"Nineteen";}
    
    if (number >= 20 && number < 30) {cout<<"Twenty"<<(number == 20)<<" "<<numberToWords(number % 10);}
    if (number >= 30 && number < 40) {cout<<"Thirty"<<(number == 30)<<" "<<numberToWords(number % 10);}
    if (number >= 40 && number < 50) {cout<<"Forty"<<(number == 40)<<" "<<numberToWords(number % 10);}
    if (number >= 50 && number < 60) {cout<<"Fifty"<<(number == 50)<<" "<<numberToWords(number % 10);}
    if (number >= 60 && number < 70) {cout<<"Sixty"<<(number == 60)<<" "<<numberToWords(number % 10);}
    if (number >= 70 && number < 80) {cout<<"Seventy"<<(number == 70)<<" "<<numberToWords(number % 10);}
    if (number >= 80 && number < 90) {cout<<"Eighty"<<(number == 80)<<" "<<numberToWords(number % 10);}
    if (number >= 90 && number < 100) {cout<<"Ninety"<<(number == 90)<<" "<<numberToWords(number % 10);}
}
