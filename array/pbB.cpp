#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    int A[N];

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int X;
    cin>> X;

    int flag = 0;
    for(int i = 0; i < N; i++){
        if(A[i]==X){
            cout << i;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "-1";
    }

    return 0;
}