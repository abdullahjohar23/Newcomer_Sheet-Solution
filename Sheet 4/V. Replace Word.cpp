// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: V. Replace Word

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

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i]=='E' and s[i+1]=='G' and s[i+2]=='Y' and s[i+3]=='P' and s[i+4]=='T') {
            cout << ' ';
            i += 4;
        } else {
            cout << s[i];
        }
    }

    return 0;
}