#include <iostream>
using namespace std;

float priceOfM(int,char);
float priceOfE(int,char);
float priceOfS(int,char);
float priceOfV(int,char);
float priceOfT(int,char);





int main()
{
    int price;
    char vehicleType;
    cout<<"Enter the vehicle type code (M,E,S,V,T): ";
    cin>> vehicleType;
    cout<<"Enter price of the vehicle: $";
    cin>> price;

    if( vehicleType == 'M')
    {
    float price1 = priceOfM(price,vehicleType);
    cout<<"The final price of type M after adding tex is $"<<price1;
    }

    if( vehicleType == 'E')
    {
    float price2 = priceOfE(price,vehicleType);
    cout<<"The final price of type E after adding tex is $"<<price2;
    }

    if( vehicleType == 'S')
    {
    float price3 = priceOfS(price,vehicleType);
    cout<<"The final price of type S after adding tex is $"<<price3;
    }

    if( vehicleType == 'V')
    {
    float price4 = priceOfV(price,vehicleType);
    cout<<"The final price of type V after adding tex is $"<<price4;
    }

    if( vehicleType == 'T')
    {
    float price5 = priceOfT(price,vehicleType);
    cout<<"The final price of type T after adding tex is $"<<price5;
    }


}

float priceOfM(int price,char vehicleType)
{
    float finalPriceOfM=price+(price*0.06);
    return finalPriceOfM;
}

float priceOfE(int price,char vehicleType)
{
    float finalPriceOfE=price+(price*0.08);
    return finalPriceOfE;
}

float priceOfS(int price,char vehicleType)
{
    float finalPriceOfS=price+(price*0.1);
    return finalPriceOfS;
}

float priceOfV(int price,char vehicleType)
{
    float finalPriceOfV=price+(price*0.12);
    return finalPriceOfV;
}

float priceOfT(int price,char vehicleType)
{
    float finalPriceOfT=price+(price*0.15);
    return finalPriceOfT;
}

