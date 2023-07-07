// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: R. String Score

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
    int n, ans = 0;
    cin >> n >> s;
 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'V') {
            ans += 5;
        } else if (s[i] == 'W') {
            ans += 2;
        } else if (s[i] == 'X') {
            i++;
        } else if (s[i] == 'Y' and i < s.size()-1) {
            s.push_back(s[i+1]);
            i++;
        } else if (s[i] == 'Z' and i < s.size()-1) {
            if (s[i+1] == 'V') {
                ans /= 5;
                i++;
            } else if (s[i+1] == 'W') {
                ans /= 2;
                i++;
            }
        }
    }
 
    cout << ans << endl;

    return 0;
}