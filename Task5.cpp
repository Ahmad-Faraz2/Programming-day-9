#include <iostream>
using namespace std;
bool checkIdentical(string elements[4]) {
    string first_element = elements[0];
    for(int i = 1; i < 4; i++) {
        if(elements[i] != first_element) {
            return false;
        }
    }
    return true;
}

int main()
{
    string elements[4];
    for(int x=0;x<4;x++){
        cout << "Enter an element:";
        cin >> elements[x];
    }
    if(checkIdentical(elements)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;

}