#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    int A[N];

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int i = 0; i < N; i++){
        if(A[i]< 0){
            cout << 2 <<" ";
        }else if(A[i] > 0){
            cout << 1 << " ";
        }else{
            cout << 0 << " ";
        }
    }

    return 0;
}