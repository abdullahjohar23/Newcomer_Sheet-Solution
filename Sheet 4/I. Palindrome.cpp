// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: I. Palindrome

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
    
    bool f = true;
    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-1-i]) {
            f = false;
            break;
        }
    }

    (f == true) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}