#include <iostream>
using namespace std;

int getFruitPrice(string , string [], int []);
int calculateTotalCost(int, int);

main(){
    string fruits[4] = {"peach", "apple", "guava", "watermelon"};
    int prices[4] = {60, 70, 40, 30};

    string fruitName;
    int quantity;
    cout<<"Enter the name of the fruit: ";
    cin>> fruitName;
    cout<< "Enter the quantity in kgs: ";
    cin>> quantity;

    int price = getFruitPrice(fruitName, fruits, prices);

    if (price != -1) {
        int totalCost = calculateTotalCost(price, quantity);
        cout<<"The total cost for "<<quantity<<" kg of "<<fruitName <<" is: "<<totalCost <<endl;
    } else {
        cout<<"Sorry, the fruit "<<fruitName <<" is not available."<<endl;
    }

}

int getFruitPrice(string fruitName, string fruits[], int prices[]) {
       bool match = false;
    for (int i = 0; i < 4; i = i + 1) {
        if (fruitName == fruits[i]) {
            match = true;
        }
        
        if (match == true) {
            return prices[i];
        }
    }
    if(match != true)
    {
        return -1;
    }

}

int calculateTotalCost(int price, int quantity){
    return price * quantity;
}