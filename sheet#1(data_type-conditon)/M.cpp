#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cin>> c;

    if(c>='A' && c<= 'Z'){
        cout<<"ALPHA\nIS CAPITAL\n";
    }else if(c>= 'a' && c <= 'z'){
        cout<<"ALPHA\nIS SMALL\n";
    }else{
        cout<<"IS DIGIT\n";
    }

    return 0;
}