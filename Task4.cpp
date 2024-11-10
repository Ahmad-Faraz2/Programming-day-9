#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number of elements in the array:";
    int n;
    cin >> n;
    int num[5];
    for(int x=0;x<n;x++){
        cout << "Enter a number:";
        cin >> num[x];
    }
    bool is7;
    for(int x=0;x<n;x++){
        int number=num[x];
    while(number>0){
        if(number%10==7){
            is7=true;
            break;
        }
        number=number/10;
    }
    if(is7==true){
        break;
    }
    }
    if(is7==true){
        cout << "Boom";
    }
    else{
        cout << "There is no 7 in the array";
    }
} 