#include <bits/stdc++.h>

using namespace std;

void numRec(int n) {
    if (n == 0) {
        return;
    }
    numRec(n - 1);
    cout << n << "\n";

}

int main() {
    int n;
    cin >> n;
    numRec(n);
    return 0;
}
