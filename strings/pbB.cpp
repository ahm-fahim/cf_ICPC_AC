#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    cout << S.substr(0, S.find("\\"));

    return 0;
}