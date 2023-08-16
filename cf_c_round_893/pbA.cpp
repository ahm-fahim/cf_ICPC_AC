#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int sum = a+b+c;
        if (a==b && sum%2==0)
        {
            cout << "Second\n" ;
        }
        else if (a!=b && a<b)
        {
            cout << "Second\n";
        }
        else
        {
            cout << "First\n";
        }

    }

    return 0;
}