#include <iostream>
using namespace std;

int calculatePrice(int money, int year) 
{
    int initialYear = 1800;
    int age = 18;
    int currentMoney = money; 

    for (int currentYear = initialYear; currentYear <= year; currentYear++) {
        if (currentYear % 2 == 0) 
        {
            currentMoney = currentMoney - 12000;
        } 
        else 
        {
            currentMoney = currentMoney - (12000 + 50 * age);
        }
        age = age + 1;
    }

    if (currentMoney >= 0) 
    {
        cout << "Yes! He will live a carefree life and will have "<< currentMoney << " dollars left." << endl;
    } else 
    {
        cout << "He will need "<< -currentMoney << " dollars to survive." << endl;
    }

    return 0;
}

main() 
{
    int money, year;
    cout << "Enter the inherited money: ";
    cin >> money;
    
    cout << "Enter the year until which he has to live (inclusive): ";
    cin >> year;

    calculatePrice(money, year);

    return 0;
}
