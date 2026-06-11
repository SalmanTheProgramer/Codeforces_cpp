#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string str;
    cin >> str;

    // using built-in func()

    // replace every "EGYPT" with " "
    // str = regex_replace (str, regex ("EGYPT"), " ");

    // cout << str << endl;

    // solving manually, using 'substr()'

    string result;

    // replacing every "EGYPT" with " "
    for (size_t i=0; i<str.size(); ) {

        if (str.substr (i, 5) == "EGYPT") {

            result += " ";  // add spce
            i += 5; // skip "EGYPT"

        }else {

            result += str[i];   // copy character
            i++;
        }
    }

    cout << result << endl;
    
    return 0;
}