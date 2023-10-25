#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
    string generate100DigitNumber() {
    string number;
    number += to_string(rand() % 9 + 1);
    for (int i = 0; i < 99; i++) {
        number += to_string(rand() % 10);
    }
    return number;
}
    string divideByA(string number, int A) {
    string result;
    int x = 0;
    for (int i = 0; i < number.length(); i++) {
        int digit = number[i] - '0';
        int temp = x * 10 + digit;
        result += to_string(temp / A);
        x = temp % A;
    }
    return result;
}
int main() {
    srand(time(0)); 
    int A;
    cout << "Enter a number: ";
    cin >> A;
    string number = generate100DigitNumber();
    string result = divideByA(number, A);
    cout << "Generated Number: " << number << endl;
    cout << "Result of Division: " << result << endl;
    return 0;
}
