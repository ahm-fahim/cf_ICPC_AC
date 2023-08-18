#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>> s;

    int sum = 0;
    for (char digit : s) {
        sum += digit - '0';
    }
    cout << sum << "\n";

    return 0;
}
