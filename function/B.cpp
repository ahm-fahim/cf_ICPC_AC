#include <bits/stdc++.h>
using namespace std;

void nthNum(int n){
    for(int i = 1; i<=n; i++){
        cout<< i ;
        if(i<n){
            cout << " ";
        }
    }
}
int main() {
    int N;
    cin >> N;

    nthNum(N);

    return 0;
}
