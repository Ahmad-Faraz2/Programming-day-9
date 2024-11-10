#include <iostream>
using namespace std;
int main()
{
    string fruit[4]={"peach", "apple", "guava", "watermelon"};
    int price[4]={60, 70, 40, 30};

    string fruit_name;
    int quantity;
    cout << "Enter the name of the fruit:";
    cin >> fruit_name;
    cout << "Enter the quantity of the fruit(kgs):";
    cin >> quantity;
    int total_price;
    for(int idx=0;idx<4;idx++)
    {
        if(fruit_name==fruit[idx]){
            total_price=quantity*price[idx];
            cout <<total_price;
            break;
        }

    }
}