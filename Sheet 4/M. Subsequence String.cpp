// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: M. Subsequence String

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
    
    string s, h = "hello";
    cin >> s;
    
    bool f = 0;
    int n = s.size();

    for (int i = 0, j = 0; i < n; i++) {
        if (s[i] == h[j]) {
            j++;
        }
        if (j == 5) {
            f = true;
            break;
        }
    }

    (f == true) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}