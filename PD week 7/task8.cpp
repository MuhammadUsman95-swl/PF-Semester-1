#include <iostream>
using namespace std;

void cargoCalculation(int cargoCount)

{   
    float minibusWeight = 0, truckWeight = 0, trainWeight = 0, totalWeight = 0;
    float totalCost = 0, numbering = 0;


    for (int x = 0; x < cargoCount; x = x + 1) 
    {
        numbering = numbering + 1;
        int cargoWeight;
        cout<<"Enter the tonnage of cargo "<<numbering <<": ";
        cin>> cargoWeight;

        totalWeight = totalWeight +  cargoWeight; 

        if (cargoWeight <= 3) 
        {
            minibusWeight = minibusWeight + cargoWeight;
            totalCost = totalCost + ( cargoWeight * 200);
        }

        else if(cargoWeight <= 11) 
        {
            truckWeight = truckWeight + cargoWeight;
            totalCost = totalCost + (cargoWeight * 175);
        } 
        else 
        {
            trainWeight = trainWeight + cargoWeight ;
            totalCost = totalCost + (cargoWeight * 120);
        }
    }

    float averagePricePerTon = totalCost / totalWeight;
    float minibusPercentage = (minibusWeight / totalWeight) * 100;
    float truckPercentage = (truckWeight / totalWeight) * 100;
    float trainPercentage = (trainWeight / totalWeight) * 100;

    cout<<averagePricePerTon <<"$"<<endl;
    cout<<minibusPercentage <<"%"<<endl;
    cout<<truckPercentage <<"%"<<endl;
    cout<<trainPercentage <<"%"<<endl;

}


int main() 
{
    int cargoCount;
    cout<<"Enter the count of cargo for transportation: ";
    cin >> cargoCount;

    cargoCalculation(cargoCount);
}


