#include <bits/stdc++.h>
using namespace std;

void arrSort(int arr[], int arrSize){
    for(int i = 0; i< arrSize-1; i++){
        for(int j =i+1; j < arrSize; j++){
            if(arr[i]> arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i = 0; i < arrSize; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int N;
    cin >> N;

    int A[N];

    for(int i = 0; i < N; i++){
        cin>> A[i];
    }

    arrSort(A,N);

    return 0;
}