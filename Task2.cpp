#include <iostream>
using namespace std;

int main() {
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    int price = 500;
    string movie_name;
    float discount;
    float final_price = 0;

    cout << "Enter the movie name: ";
    cin >> movie_name;

    for(int idx = 0; idx < 5; idx++) {
        if(movies[idx] == movie_name) {
            if(idx % 2 == 0) {
                discount = 0.10;
            } else {
                discount = 0.05;
            }
            final_price = price - (price * discount);
            break;
        }
    }
        cout << "The final price is: " << final_price;
   
}
