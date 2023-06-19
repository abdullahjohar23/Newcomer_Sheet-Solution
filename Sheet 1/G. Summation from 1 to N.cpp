// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: G. Summation from 1 to N

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

    long long n, ans;
    cin >> n;

    ans = (n * (n+1)) / 2;

    cout << ans << endl;
    
    return 0;
}