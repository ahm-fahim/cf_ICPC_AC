#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int month = 30;
    int year = 365;

    cout<<(n/year)<< " years\n";
    cout<<(n%year)/30 << " months\n";
    cout<<(n%year)%30 << " days\n";

    return 0 ;
}