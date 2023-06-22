// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: Z. Three Numbers

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

    int k, s, ans = 0;
    cin >> k >> s;
 
    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            if (i+j <= s and (i+j+k >= s)) {
                ans++;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}