#include <bits/stdc++.h>
using namespace  std;

int main(){
    int t;
    cin >> t;
    int arr[t];
    for(int i = 0; i< t; i++){
        cin >> arr[i];
    }

    int mx = 0;
    for(int i = 0; i< t; i++){
        mx = max(mx, arr[i]);
    }
    cout << mx << "\n";

    return 0;
}