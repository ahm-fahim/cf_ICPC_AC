#include <iostream>
#include <vector>

using namespace std;

bool isPossible(const vector<int>& array, int target, int index, int currentSum) {
    if (index == array.size()) {
        return currentSum == target;
    }

    // Try adding the current element
    if (isPossible(array, target, index + 1, currentSum + array[index])) {
        return true;
    }

    // Try subtracting the current element
    if (isPossible(array, target, index + 1, currentSum - array[index])) {
        return true;
    }

    return false;
}

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    if (isPossible(A, X, 0, 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
