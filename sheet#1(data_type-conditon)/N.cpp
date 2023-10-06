#include <bits/stdc++.h>
using namespace std;

int main(){
    char x;
    cin >> x;

    char ans = (x>='A'&& x<='Z')? tolower(x): toupper(x);
    cout<< ans << "\n";

    return 0;
}
