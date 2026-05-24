// W. Mathematical Expression
// link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W 

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int a, b, c;
    char p, q;
    cin >> a >> p >> b >> q >> c;

    if (p == '+' && a+b != c) {

        cout << a+b;

    }else if (p == '-' && a-b != c) {

        cout << a-b;

    }else if (p == '*' && a*b != c) {

        cout << a*b;

    }else {

        cout << "Yes";
    }
    
    return 0;
}
