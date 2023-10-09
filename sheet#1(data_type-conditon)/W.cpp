#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;

    if((s=='+'|| s=='*'||s=='-') && (a+b==c || a*b==c || a-b==c)){
        cout<< "Yes\n";
    }else{
        if(s=='+'){
            cout<<a+b<<"\n";
        }if(s=='*'){
            cout<<a*b<<"\n";
        }if(s=='-'){
            cout<<a-b<<"\n";
        }
    }
    return 0;
}