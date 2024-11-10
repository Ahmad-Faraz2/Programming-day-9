#include <iostream>
using namespace std;

int main()
{
      cout << "Enter the number of elements in the array:";
    int n;
    cin >> n;
    int num[n];
    for(int x=0;x<n;x++){
        cout << "Enter a number:";
        cin >> num[x];
    }
    cout << "Enter the number of times even-odd transformations needs to be done:";
    int i;
    cin >> i;

    for(int x=0;x<i;x++){
        for(int x=0;x<n;x++){
            if(num[x]%2==0){
                num[x]=num[x]-2;
            }
            else{
                num[x]=num[x]+2;
            } 
        }
    }
    for(int x=0;x<n;x++){
        cout << num[x] << endl;
    }

}