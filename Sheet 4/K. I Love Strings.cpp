// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: K. I Love Strings

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
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size(), m = s2.size();
        
        for (int i = 0; i < n or i < m; i++) {
            if (i < n) {
                cout << s1[i];
            } if (i < m) {
                cout << s2[i];
            }
        }
        cout << endl;
    }

    return 0;
}