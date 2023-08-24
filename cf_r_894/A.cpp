#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin>> n >> m;

        char ch;
        string str, arr[n];

        while(n--){
            for(int i = 1; i<= m; i++){
                cin>> ch;
                str +=ch;
            }
        }

        arr[n] += str;
        for(int i = 0; i<=n; i++){
            cout<< arr[i];
        }

    }


    return 0;
}
