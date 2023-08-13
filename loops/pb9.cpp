#include <bits/stdc++.h>
using namespace std;

int reverse(int n ){
    int rim, rev;
    rev = 0;
    while(n != 0){
        rim = n%10;
        rev = rev*10+rim;
        n = n/10;
    }
    return rev;
}

int main(){
    int n;
    cin >> n;

    if(reverse(n)==n){
        cout << n << "\nYES\n";
    }else{
        cout << reverse(n) << "\nNO\n";
    }

    return 0;
}