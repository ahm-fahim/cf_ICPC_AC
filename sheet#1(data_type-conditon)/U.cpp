#include <bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin>> n;

    (floor(n)== n)?cout<<"int "<<int(n)<<"\n":cout<<"float " <<int(n)<<" "<<n-(int(n))<<"\n";

    return 0;
}