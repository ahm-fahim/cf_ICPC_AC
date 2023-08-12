#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    int flag = 0;

    if(x==0 || x==1){
        flag = 1;
    }
    for (int i = 2; i <= x/2; ++i){
        if(x%i == 0){
            flag = 1;
            break;
        }
    }

    if(flag==0){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}