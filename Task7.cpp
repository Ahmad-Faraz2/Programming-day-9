#include <iostream>
using namespace std;
int countingCommonCharacters(string str1, string str2) {
    int count = 0;
    int charCount[] = {0};

    for(int i = 0; str1[i] != '\0'; i++) {
        charCount[str1[i]]++;
    }


    for(int i = 0; str2[i] != '\0'; i++) {
        if(charCount[str2[i]] > 0) {
            charCount[str2[i]]--;
            count++;
        }
    }

    return count;
}

int main() {
    string str1, str2;
    cout << "Enter first string:";
    cin >> str1;
    cout << "Enter second string:";
    cin >> str2;

    int commonCharacters = countingCommonCharacters(str1, str2);
    cout << "Number of common characters: " << commonCharacters << endl;

    return 0;
}
