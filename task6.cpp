#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}
int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isspace(ch)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}
string reverseString(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}
string capitalizeSecondLetters(string str) {
    bool isFirstLetter = true;
    for (size_t i = 0; i < str.length(); ++i) {
        if (isalpha(str[i])) {
            if (isFirstLetter) {
                isFirstLetter = false;
            } else {
                str[i] = toupper(str[i]);
                isFirstLetter = true;
            }
        } else {
            isFirstLetter = true;
        }
    }
    return str;
}
int main() {
    ifstream file("fileData.txt");
    string fileData((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());

    cout << "Number of vowels: " << countVowels(fileData) << endl;
    cout << "Number of words: " << countWords(fileData) << endl;
    cout << "Reversed text: " << reverseString(fileData) << endl;
    cout << "Capitalized second letters: " << capitalizeSecondLetters(fileData) << endl;

    return 0;
}