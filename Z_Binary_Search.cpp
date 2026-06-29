#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, q;
    cin >> n >> q;

    vector <long long int> v(n);
    for (int i=0; i<n; i++) {

        cin >> v[i];
    }

    // sorting the array
    sort (v, v + n);
    
    
    
    return 0;
}