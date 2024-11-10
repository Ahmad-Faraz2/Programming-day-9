#include <iostream>
#include <string>

using namespace std;

string MOVES[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

void pinToDance(string pin) {
    int moveCount = 10;

    if (pin.length() != 4) {
        cout << "Invalid input." << endl;
        return;
    }

    for (int i = 0; i < 4; i++) {
        int moveIndex = (pin[i] - '0' + i) % moveCount;
        cout << MOVES[moveIndex] << " ";
    }
    cout << endl;
}

int main() {
    cout << "Enter a PIN: ";
    string pin;
    cin >> pin;

    pinToDance(pin);

    return 0;
}
