#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, q;
    cin >> n >> q;

    vector <long long int> v(n);
    for (int i=0; i<n; i++) {

        cin >> v[i];
    }

    // sorting the vector array
    sort (v.begin(), v.end());
    
    // execution against test cases
    while (q--) {

        int x;
        cin >> x;

        int flag = 0, low = 0, high = n-1;

        while (low <= high) {

            int mid_index = (low + high) / 2;   // calculate mid index

            if (v[mid_index] == x) {    

                flag = 1;
                break;
            
            }else if (v[mid_index] > x) {   

                high = mid_index - 1;

            }else if (v[mid_index] < x) {

                low = mid_index + 1;
            }

        }

        if (!flag) cout << "not found" << endl;
        else cout << "found" << endl;

    }
    
    return 0;
}