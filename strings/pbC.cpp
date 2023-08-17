#include <bits/stdc++.h>

using namespace std;

int main() {
    string X, Y;
    cin >> X;
    cin >> Y;

    if (X.length() >= Y.length())
        cout << Y;
    else
        cout << X;

    return 0;
}