#include <iostream>
using namespace std;

string calculateCost(float, string, int);

main()
{
    float budget;
    string category;
    int numPeople;
    cout<<"Enter the budget: ";
    cin>> budget;
    cout<<"Enter the category (VIP/normal): ";
    cin>> category;
    cout<<"Enter the number of people in a group: ";
    cin>> numPeople;

    string chcekForTicket = calculateCost(budget, category, numPeople);
    cout<<""<<chcekForTicket;
}

string calculateCost(float budget, string category, int numPeople)
{
    
    float vipTicket = numPeople * 499.99;
    float normalTicket = numPeople * 249.99;

    float remainingBudget, calculateTicket;
    string result;
    if( numPeople >= 1 && numPeople <= 4)
    {
        remainingBudget = budget - (budget * 0.75);
    }
    if( numPeople >=5 && numPeople <= 9)
    {
        remainingBudget = budget - (budget * 0.60);
    }
    if( numPeople >= 10 && numPeople <= 24 )
    {
        remainingBudget = budget - (budget * 0.50);
    }
    if( numPeople >=25  && numPeople < 49)
    {
        remainingBudget = budget - (budget * 0.40);
    }
    if( numPeople >= 50 )
    {
        remainingBudget = budget - (budget * 0.25);
    }

    if( category == "VIP")
    {
        if( remainingBudget >= vipTicket)
        {
            calculateTicket = remainingBudget - vipTicket;
            result = "Yes!";
        }
        if( remainingBudget < vipTicket)
        {
            calculateTicket = vipTicket - remainingBudget;
            result = "Not enough!";    
        }
    }
    if( category == "normal")
    {
        if( remainingBudget >= normalTicket)
        {
            calculateTicket = remainingBudget - normalTicket;
            result = "Yes!";
        }
        if( remainingBudget < normalTicket)
        {
            calculateTicket = normalTicket - remainingBudget;
            result = "Not enough!";
        } 
    }
 
    return result;   
}