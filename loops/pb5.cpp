#include <bits/stdc++.h>
using namespace  std;

int main(){
    int t;
    cin >> t;
//    int arr[t];
//    for(int i = 0; i< t; i++){
//        cin >> arr[i];
//    }
//
    int mx = 0;
//    for(int i = 0; i< t; i++){
//        mx = max(mx, arr[i]);
//    }
//    cout << mx << "\n";

    // another away
    while(t--){
        int n;
        cin >> n;

        mx = max(mx , n);
    }
    cout << mx << endl;
    return 0;
}