// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: G. Conversion

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
    
    char c;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' and s[i] <= 'z') {
            c = s[i] - 32;
        } else if (s[i] >= 'A' and s[i] <= 'Z') {
            c = s[i] + 32;
        } else if (s[i] == ',') {
            c = ' ';
        }
        cout << c;
    }

    return 0;
}