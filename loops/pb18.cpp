#include <bits/stdc++.h>
using namespace std;

int main(){
    while (true){
        int n, m;
        cin>>n >> m;

        int sum = 0;

        if(n <= 0|| m <= 0){
            break;
        }
        if(n<=m){
            for(int i = n; i<= m; i++){
                sum += i;
                cout <<i << " ";
            }
        }else{
            for(int i = m; i<= n; i++){
                sum += i;
                cout <<i << " ";
            }
        }
        cout << "sum ="<< sum << "\n";

    }
    return 0;
}
