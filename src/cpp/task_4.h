#include <iostream>
#include <string>
using namespace std;
int findMatch(const string& sentence, const string& word) {
    size_t found = sentence.find(word);
    if (found != string::npos) {
        return static_cast<int>(found);
    }
    return -1;
}
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    string word;
    cout << "Enter a word: ";
    cin >> word;
    int matchIndex = findMatch(sentence, word);
    if (matchIndex != -1) {
    cout << "Match found at index " << matchIndex << endl;
    } else {
    cout << "No match" << endl;
    }
    return 0;
}
