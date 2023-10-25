/*
 * Author:
 * Date:
 * Name:
 */
#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n < 10) {
        if (n % 4 != 0) cout << 13 << "/" << 0 << 9 << "/" << 0 << 0 << 0 << n << endl;
        else if (n % 100 == 0 and n % 400 != 0) cout << 13 << "/" << 0 << 9 << "/" << 0 << 0 << 0 << n << endl;
        else cout << 12 << "/" << 0 << 9 << "/" << 0 << 0 << 0 << n;
    } else {
        if (n < 100) {
            if (n % 4 != 0) cout << 13 << "/" << 0 << 9 << "/" << 0 << 0 << n << endl;
            else if (n % 100 == 0 and n % 400 != 0) cout << 13 << "/" << 0 << 9 << "/" << 0 << 0 << n << endl;
            else cout << 12 << "/" << 0 << 9 << "/" << 0 << 0 << n;
        } else if (n < 1000) {
            if (n % 4 != 0) cout << 13 << "/" << 0 << 9 << "/" << 0 << n << endl;
            else if (n % 100 == 0 and n % 400 != 0) cout << 13 << "/" << 0 << 9 << "/" << 0 << n << endl;
            else cout << 12 << "/" << 0 << 9 << "/" << 0 << n;
        } else {
            if (n % 4 != 0) cout << 13 << "/" << 0 << 9 << "/" << n << endl;
            else if (n % 100 == 0 and n % 400 != 0) cout << 13 << "/" << 0 << 9 << "/" << n << endl;
            else cout << 12 << "/" << 0 << 9 << "/" << n;
        }


    }
    return 0;
}
