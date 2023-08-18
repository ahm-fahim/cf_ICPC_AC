#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for(int i = 0; i< N; i++){
        cin >> A[i];
    }

    int mn = A[0];
    for(int i = 0; i< N; i++){
        mn = min(mn, A[N]);
    }
    cout << mn ;

    return 0;
}