// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: Q. Digits

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
    int t;
    cin >> t;

    while (t--) {
        cin >> s;

        for (int i = s.size()-1; i >= 0; i--) {
            cout << s[i] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}