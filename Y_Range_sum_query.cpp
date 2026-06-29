#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, q;  
    cin >> n >> q;
    
    // solving with vector instead of array
    vector <long long int> v(n);
    for (int i=0; i<n; i++) {

        cin >> v[i];
    }

    // assigning prefix sum
    vector <long long int> prefix_sum(n);
    prefix_sum[0] = v[0]; // assigning the 1st val of prefix sum

    for (int i=1; i<n; i++) {

        prefix_sum[i] = prefix_sum[i-1] + v[i];
    }

    while (q--) {

        int l, r;
        cin >> l >> r;

        l--, r--;   // converting the position to array index

        long long int sum = 0;

        if (l == 0) {

            sum = prefix_sum[r]; // as l=0 will make l-1=invalid, so then the sum would be from 1st to last

        }else {

            sum = prefix_sum[r] - prefix_sum[l-1];
        }

        // output
        cout << sum << endl;
    }
    
    return 0;
}