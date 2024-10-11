#include <iostream>
using namespace std;

int calculateDiscount(string, string, int);

main()
{
    string day, month;
    int purchaseAmount;
    cout<<"Enter Purchase Day: ";
    cin>> day;
    cout<<"Enter Purchase Month: ";
    cin>> month;
    cout<<"Enter Purchase Amount: ";
    cin>> purchaseAmount;

    int totalPayableAmount = calculateDiscount(day, month, purchaseAmount);
    cout<<"Payable Amount after Discount: "<<totalPayableAmount;

}

int calculateDiscount(string day, string month, int purchaseAmount)
{ 
    int payableAmount;
    if(day == "sunday" && (month == "october" || month == "march" || month == "august") )
    {  
           payableAmount = purchaseAmount - (purchaseAmount * 0.1);
    }
    else if ( day == "monday" && (month == "november" || month == "december"))
    {
           payableAmount = purchaseAmount - (purchaseAmount * 0.05);
    }
    else
    {
            payableAmount = purchaseAmount;
    }
    return payableAmount;
}