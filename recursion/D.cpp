#include <bits/stdc++.h>
using namespace std;

void digit(int n) {
    if (n == 0) {
        return;
    }
    while(n>0){
        int d = n%10;
        n/=10;
        cout<< d <<" ";
    }
    digit(n-1);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        digit(n);
    }

    return 0;
}
