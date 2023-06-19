// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: Z. Hard Compare

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

    double  a, b, c, d, x, y;
    cin >> a >> b >> c >> d;
 
    x = b * log(a);
    y = d * log(c);
 
    if (x > y) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}