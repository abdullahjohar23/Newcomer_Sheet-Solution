// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: N. Max Subsequence

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
    
    int n, ans = 1;
    string str;
    cin >> n >> str;
    
    for (int i = 0; i < n-1; i++) {
        if (str[i] != str[i+1]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}