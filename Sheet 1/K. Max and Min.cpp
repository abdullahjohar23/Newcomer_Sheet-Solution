// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: K. Max and Min

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

    int a, b, c;
    cin >> a >> b >> c;

    int mn = INT_MAX;
    int mx = INT_MIN;

    if (a < mn) {
        mn = a;
    } if (b < mn) {
        mn = b;
    } if (c < mn) {
        mn = c;
    }
    
    if (a > mx) {
        mx = a;
    } if (b > mx) {
        mx = b;
    } if (c > mx) {
        mx = c;
    }
    
    cout << mn << ' ' << mx << endl;
    
    return 0;
}