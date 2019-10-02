#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long n, k;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> k;
        long arr[k];
        for(int j = 0; j < k; j++){
            cin >> arr[j];
        }
            sort(arr, arr + k);
            n = arr[0] * arr[k-1];
            cout << "Case " << i << ": " << n << endl;
    }
    return 0;
}