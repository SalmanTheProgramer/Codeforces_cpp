#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    // execution against test cases
    while (t--) {

        int n;
        cin >> n;

        int arr[n];
        for (int i=0; i<n; i++) {

            cin >> arr[i];
        }

        // if n is odd, operaation not possible
        if (n%2 != 0) {

            cout << "-1" << endl;
            continue;
        }

        int even = 0, odd = 0;

        // counting odd & even
        for (int i=0; i<n; i++) {

            if (arr[i]%2 == 0) {

                even++;
        
            }else {

                odd++;
            }
        }

        // output
        if (even == odd) {

            cout << "0" << endl;
    
        }else if (even > odd) {

            cout << (even - odd)/2 << endl;

        }else if (odd > even) {

            cout << (odd - even)/2 << endl;
        }
    }

    return 0;
}