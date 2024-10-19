#include <iostream>
using namespace std;


int calculateMoney(int age, int washingMachinePrice, int toyPrice) 
{
    int moneySaved = 0;
    int toysSoldMoney = 0;
    int birthdayMoney = 0;
    int noOfToys = 0;

    for (int year = 1; year <= age; year = year + 1) 
    {
        if (year % 2 == 0) 
        {  
            birthdayMoney = birthdayMoney + 10;
            moneySaved = moneySaved + (birthdayMoney - 1);            
        } 
        else 
        {      
            toysSoldMoney = toysSoldMoney + toyPrice;
        }
    }   


    int totalMoney = moneySaved + toysSoldMoney;
    if (totalMoney >= washingMachinePrice) {
     cout << "Yes! " <<totalMoney - washingMachinePrice << endl;
    } 
    else 
    {
        cout << "No! " << washingMachinePrice - totalMoney << endl;
    }
}

int main() {
    
    int age, washingMachinePrice, toyPrice;

    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> washingMachinePrice;
    cout << "Enter the price of each toy: ";
    cin >> toyPrice;

    calculateMoney(age, washingMachinePrice, toyPrice);



    return 0;
}

