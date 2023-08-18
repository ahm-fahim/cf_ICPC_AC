#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];

    for(int i = 0 ; i< N; i++){
        cin >> A[i];
    }

    int flag = 0;
    for(int i = 0; i<N ;i++){
       if(A[i] != A[N-i-1]){
           flag = 1;
           break;
       }
    }

    if(flag==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
