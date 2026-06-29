#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i=1; i<=n; i++) {

        cin >> a[i];
    }

    int x = 0, y = 0;

    // interupting me
    for (int i=1; i<=k; i++) {

        if (a[i] > a[k]) {
            
            x++;
        
        }
    }

    // interupting other 
    for (int i=k+1; i<=n; i++) {

        if (a[i] < a[k]) {

            y++;
        }
    }

    cout << x << " " << y;
    
    return 0;
}