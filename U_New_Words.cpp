#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string ch;
    cin >> ch;

    // converting the whole string to Upper Case
    for (char &c : ch) {

        c = toupper (c);
    }

    // count frequencies of required letters
    map <char, int> freq;
    for (char c : ch) {

        if (c == 'E' || c == 'G' || c == 'Y' ||
            c == 'P' || c == 'T') {

                freq[c]++;
        }
    }

    // find min. count from "EGYPT"
    int result = INT_MAX;

    string target = "EGYPT";
    for (char c : target) {

        result = min (result, freq[c]);
    }

    // output
    cout << result << endl;
    
    return 0;
}