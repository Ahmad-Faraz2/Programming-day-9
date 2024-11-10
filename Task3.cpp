#include <iostream>
using namespace std;
string word;
int length=0;
int x=0;
int main()
{
    cout << "Enter a string:";
    cin >> word;

    while(word[x]!='\0'){
        x++;
    }
    length=x;
    if(length%2==0){
        cout << "true";     
    }
    else{
        cout << "False";
    }

}