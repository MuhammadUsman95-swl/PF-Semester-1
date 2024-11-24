#include <iostream>
using namespace std;

int findMovieIndex(string, string []);

main(){
    int ticketPrice = 500;
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    string movieName;
    cout<<"Enter the name of the movie: ";
    cin>> movieName;

    int index = findMovieIndex(movieName, movies);

    if (index > 0 && index < 5) {
        int discountedPrice;
        if (index % 2 == 0) { 
            discountedPrice = ticketPrice * 0.90;
        } else {
            discountedPrice = ticketPrice * 0.95;
        }
        cout<<"The ticket price for " << movies[index]<<" after discount is: "<<discountedPrice<<" $";
    } else {
        cout << "Sorry, the movie " << movieName << " is not available.";
    }
}

int findMovieIndex(string movieName, string movies[5]) {   
    for (int i = 0; i < 5; i = i + 1) {
        if(movieName == movies[i]){
            return i;
        }
    }    
}