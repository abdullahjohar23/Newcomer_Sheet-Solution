// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: X. Comparison

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

    string s, s1 = "", s2 = "";
    cin >> s;
 
    string str = s;
    string ans = s;
 
    for(int i = 0; i < s.size()-1; i++) {
        s1 += s[i];
        str.erase(0, 1);
        s2 = str;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        ans = min(ans, s1+s2);
    }
 
    cout << ans << endl;

    return 0;
}