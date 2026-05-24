#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int arr[n];
        for (int i=0; i<n; i++) {

            cin >> arr[i];
        }

        int minResult = INT_MAX;

        // check all pairs (i, j) with i < j
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {

                int result = arr[i] + arr[j] + (j - i);
                // using built-in min()
                minResult = min (minResult, result);
            }
        }

        cout << minResult << endl;
    }
    
    return 0;
}