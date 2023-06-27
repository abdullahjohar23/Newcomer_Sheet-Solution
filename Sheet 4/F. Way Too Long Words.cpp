// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: F. Way Too Long Words

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
    
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (s.size() <= 10) {
            cout << s << endl;
        } else {
            cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
        }
    }

    return 0;
}