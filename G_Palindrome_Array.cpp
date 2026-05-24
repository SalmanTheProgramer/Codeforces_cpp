#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++) {

        cin >> arr[i];
    }

    bool isPallindrome = true;

    int i=0, j=n-1;
    while (i < j) {

        if (arr[i] != arr[j]) {

            isPallindrome = false;
            break;
        }

        i++;
        j--;
    }

    if (!isPallindrome) {

        cout << "NO";

    }else {

        cout << "YES";
    }
    
    return 0;
}