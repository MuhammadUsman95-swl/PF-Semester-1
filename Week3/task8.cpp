#include <iostream>
using namespace std;
main () {
float vegetable_price;
float fruit_price;
int kilograms_vegetables;
int kilograms_fruits;
float earning;
cout<<"Enter vegetable price per kilograms (in coins): ";
cin>> vegetable_price;
cout<<"Enter fruit price per kilograms (in coins): ";
cin>> fruit_price;
cout<<"Enter total kilograms of vegetables: ";
cin>> kilograms_vegetables;
cout<<"Enter total kilograms of fruits: ";
cin>> kilograms_fruits;
earning=(fruit_price*kilograms_fruits)/(vegetable_price*kilograms_vegetables);
cout<<"Total earning in rupees (Rps): "<<earning;
}