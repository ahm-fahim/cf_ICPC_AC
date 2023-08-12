#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    for(int i = 0; i < size ; i++){
       if(arr[i] % 2 == 0){
           even += 1;
       }
       if(arr[i] % 2 != 0){
           odd += 1;
       }
       if( arr[i] > 0){
           positive += 1;
       }
       if(arr[i] < 0){
           negative += 1;
       }
    }

    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << positive << "\n";
    cout << "Negative: " << negative << "\n";

    return 0;
}