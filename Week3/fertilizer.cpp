#include <iostream>
using namespace std;
main () {
int bag_size;
int bag_cost;
int area_bag_covered;
int cost_per_pound;
int cost_per_square_foot;
cout<<"Enter the size  of the fertilizer bag in pound: ";
cin>> bag_size;
cout<<"Enter the cost of bag: $";
cin>> bag_cost;
cout<<"Enter the area in square feet  that can be covered by bag: ";
cin>> area_bag_covered;
cost_per_pound=bag_cost/area_bag_covered;
cout<<"Cost of fertilizer per pound: $"<<cost_per_pound;
cost_per_square_foot=bag_cost/area_bag_covered;
cout<<"Cost of fertilizer per square foot: $"<<cost_per_square_foot;
}
