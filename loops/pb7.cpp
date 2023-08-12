#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    if( 1 <= t && t <= 15){
        while (t--){
            int n;
            cin >> n;

            if(0 <= n && n <=20){
                long long int fact =1;
                for(int i = 1 ; i <= n ; i++){
                    fact = fact*i;
                }
                cout << fact << "\n";
            }
        }
    }

    return 0;
}