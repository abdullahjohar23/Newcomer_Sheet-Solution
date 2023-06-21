// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: E. Max

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

    int n, x, mn = 0;
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > mn) {
            mn = x;
        }
    }
 
    cout << mn << endl;
    
    return 0;
}