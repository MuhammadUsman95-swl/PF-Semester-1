#include <iostream>
using namespace std;
main () {
string movie_name;
float adult_ticket_price;
float child_ticket_price;
float sold_adult_ticket;
float sold_child_ticket;
float percentage_donated_to_charity;
float total_amount_generated;
float donation_to_charity;
float amount_after_donation;
cout<<"Enter the movie name: ";
cin>> movie_name;
cout<<"Enter the adult ticket price: $";
cin>> adult_ticket_price;
cout<<"Enter the child ticket price: $";
cin>> child_ticket_price;
cout<<"Enter the number of adult ticket sold: ";
cin>> sold_adult_ticket;
cout<<"Enter the number of child ticket sold: ";
cin>> sold_child_ticket;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>> percentage_donated_to_charity;
cout<<"Movie: "<<movie_name<<endl;
total_amount_generated=(adult_ticket_price*sold_adult_ticket)+(child_ticket_price*sold_child_ticket);
cout<<"Total amount generated: $"<<total_amount_generated<<endl;
donation_to_charity=(total_amount_generated/percentage_donated_to_charity);
cout<<"Donation to charity ("<<percentage_donated_to_charity<<"): $"<<donation_to_charity<<endl;
amount_after_donation=total_amount_generated-donation_to_charity;
cout<<"Remaining amount after donation: $"<<amount_after_donation<<endl;
}