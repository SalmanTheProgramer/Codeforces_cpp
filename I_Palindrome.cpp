#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    cin >> str;

    string str2 = str;  // copying str to str2

    // reversing the string
    reverse (str2.begin(), str2.end());

    // to check Pallindrome or not!
    if (str2 != str) cout << "NO";
        else cout << "YES";
    
    return 0;
}