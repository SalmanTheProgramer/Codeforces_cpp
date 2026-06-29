#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {

        string s;
        cin >> s;

        int freq[26] = {0};  // frequency array

        // counting the charatcters
        for (int i=0; i<(int)s.size(); i++) {

            freq[s[i] - 'a']++;
        }

        int oddCnt = 0;

        // counting how many of them are odd
        for (int i=0; i<26; i++) {

            if (freq[i] % 2 != 0) oddCnt++;
        }

        // output
        int result = (oddCnt > 1) ? (oddCnt - 1) : 0;
        cout << result << endl;
    }


    
    return 0;
}