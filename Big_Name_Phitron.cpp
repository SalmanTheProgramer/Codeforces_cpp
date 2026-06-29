#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    getline (cin, s);

    // converting lower in case
    for (int i=0; i<(int) s.size(); i++) {

        s[i] = tolower (s[i]);
    }

    // strinf stream
    stringstream ss (s);
    string word;
    int cnt = 0;

    while (ss >> word) {

        if (word == "phitron") cnt++;
    }

    cout << cnt <<endl;
    
    return 0;
}