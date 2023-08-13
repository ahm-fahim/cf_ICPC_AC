#include <bits/stdc++.h>
using namespace std;

//Greatest common divisor

int main(){
    int a,b;
    cin >> a>>b;

    int gcd = 0;

    for(int i = 1; i <=a && i <= b; i++){
        if(a%i == 0 && b%i == 0){
            gcd = i;
        }
    }
    cout << gcd << "\n";

    return 0;
}