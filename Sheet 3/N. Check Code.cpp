// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: N. Check Code

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
    int a, b;
    bool f = true;
    cin >> a >> b >> s;

    for (int i = 0; i < s.size(); i++) {
        if (i == a) {
            if (s[i] != '-') {
                f = false;
                break;
            }
        } else {
            if (!(s[i] >= '0' and s[i] <= '9')) {
                f = false;
                break;
            }
        }
    }

    if (f == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}