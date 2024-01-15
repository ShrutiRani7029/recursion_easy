#include<bits/stdc++.h>
using namespace std;

float rec(int arr[], int n, float sum = 0, float count = 0) {
    if (n > 0) {
        count++;
        sum += arr[n - 1];  // Adjust the index to access the correct element
        return rec(arr, n - 1, sum, count);
    }
    if (count == 0) {
        // To avoid division by zero if the array is empty
        return 0;
    }
    return sum / count;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << rec(arr, n);

    return 0;
}

