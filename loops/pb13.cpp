#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int flag1 = 0;

    for(int i = a; i<= b; i++){
        int num = i;
        int flag2 = 0;

        while(num > 0){
            int digit = num % 10;
            if(digit != 4 && digit != 7){
                flag2 = 1;
                break;
            }
            num /= 10;
        }

        if(flag2 == 0){
            cout << i << " ";
            flag1 = 1;
        }
    }

    if(flag1 == 0){
        cout << "-1\n";
    }
    return 0;
}