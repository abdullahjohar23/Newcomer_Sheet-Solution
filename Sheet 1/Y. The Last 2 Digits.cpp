// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: Y. The Last 2 Digits

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

    long long a, b, c, d, last2;
    cin >> a >> b >> c >> d;
 
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;

    last2 = (a*b*c*d) % 100;

    if (last2 < 10) {
        cout << 0 << last2 << endl;
    } else {
        cout << last2 << endl;
    }

    return 0;
}