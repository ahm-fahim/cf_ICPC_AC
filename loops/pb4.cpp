#include <bits/stdc++.h>
using namespace std;

int main(){
    int pass = 1999;
    int newPass;

    while(cin >> newPass){
        if(newPass == pass){
            cout << "Correct\n";
            break;
        }else{
            cout << "Wrong\n";
        }
    }
}