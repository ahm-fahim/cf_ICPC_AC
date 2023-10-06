#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    while (x >= 10)x /= 10;
    (x % 2 == 0) ? cout << "EVEN\n" : cout << "ODD\n";

    return 0;
}