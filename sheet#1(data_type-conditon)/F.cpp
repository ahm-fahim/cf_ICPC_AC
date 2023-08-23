#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,m;
    cin>>n>>m;
    long long sum = 0;
    while(true){
        sum+= n%10 + m%10;
        n/=10;
        m/=10;
        break;
    }
    cout << sum ;

    return 0;
}
