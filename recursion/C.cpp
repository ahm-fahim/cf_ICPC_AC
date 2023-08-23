#include <bits/stdc++.h>
using namespace std;

void numRec(int n) {
    if (n == 0) {
        return;
    }
    cout << n;
    if(n-1){
        cout<<" ";
    }
    numRec(n - 1);
}

int main() {
    int n;
    cin >> n;
    numRec(n);
    return 0;
}
