#include <bits/stdc++.h>
using namespace std;

int dSum(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){
    int N,A,B;
    cin >> N >> A >> B;
    int sum = 0;
    for(int i = 1; i <= N; i++){
        int d = dSum(i);
        if(d >= A and d <= B){
            sum += i;
        }
    }
    cout << sum ;

    return 0;
}