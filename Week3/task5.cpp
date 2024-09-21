#include <iostream>
using namespace std;
main () {
string name;
int weight_loss;
int days_required;
cout<<"Enter the name of person: ";
cin>> name;
cout<<"Enter the target weight loss in kilogram: ";
cin>> weight_loss;
days_required=weight_loss*15;
cout<<name<<" will need " <<days_required<<" days to loss "<<weight_loss<<" kg of weight by following the doctor's suggestions";
}