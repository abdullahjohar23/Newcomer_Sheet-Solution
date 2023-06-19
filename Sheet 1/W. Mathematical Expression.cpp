// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: W. Mathematical Expression

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char s, q;
    int a, b, result;
    cin >> a >> s >> b >> q >> result;
 
    if (s == '+') {
        if (result == a + b) {
            cout << "Yes" << endl;
        } else {
            cout << a + b << endl;
        }
    }
    
    else if (s == '-') {
        if (result == a - b) {
            cout << "Yes" << endl;
        } else {
            cout << a - b << endl;
        }
    }
    
    else if (s == '*') {
        if (result == a * b) {
            cout << "Yes" << endl;
        } else {
            cout << a * b << endl;
        }
    }

    return 0;
}