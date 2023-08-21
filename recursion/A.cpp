#include <bits/stdc++.h>
using namespace std;

void loveRec(int n){
    if(n==0){
        return;
    }
    cout<< "I love Recursion\n";
    loveRec(n-1);
}

int main() {
    int n;
    cin>> n;
    if(n>=1 && n<=100)
        loveRec(n);
    return 0;
}
