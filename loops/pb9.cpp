#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;

    string palindrome =string(n.rbegin(), n.rend());

    if(n==palindrome){
        cout <<n <<"\n"<<"YES\n";
    }else {
        cout <<n <<"\n" <<"NO\n";
    }

    return 0;
}