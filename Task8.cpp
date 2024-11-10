#include<iostream>
using namespace std;

int coloringTime(string cols[], int n) {
    int time = 0;
    for(int i = 0; i < n; i++) {
        time =time+2;
        if(i > 0 && cols[i] != cols[i-1]) {
            time++;
        }
    }
    return time;
}

int main() {
   int n;
    cout << "Enter the number of colors: ";
    cin >> n;
    string cols[n];
    cout << "Enter the colors:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> cols[i];
    }

    cout << coloringTime(cols, n) << endl;
    return 0;
}
