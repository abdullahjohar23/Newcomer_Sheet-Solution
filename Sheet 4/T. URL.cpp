// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: T. URL

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

    int i, x;
    string s;
    cin >> s;
    
    for (i = 0; i < s.size(); i++) {
        if (s[i] == '?') {
            x = i;
            break;
        }
    }

    for (int i = x+1; i < s.size(); i++) {
        if (s[i] == '&') {
            cout << endl;
        } else if (s[i] == '=') {
            cout << ": ";
        } else {
            cout << s[i];
        }
    }

    return 0;
}