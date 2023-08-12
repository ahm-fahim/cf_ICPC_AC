#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int flag = 0;
    for (int i = 1; i <= N; i++){
        if(i%2==0){
            cout << i << "\n";
            flag += 1;
        }
    }
    if(flag == 0){
        cout << -1 << "\n";
    }

    return 0;
}