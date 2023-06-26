// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: Y. Range sum query

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
    
    long long n, q, l, r, sum = 0;
    cin >> n >> q;

    long long arr[n];

    vector <long long> preSum;
    preSum.push_back (sum);

    for (int i = 0; i < n; i++) {
        cin >> arr [i];
        sum += arr[i];
        preSum.push_back (sum);
    }

    while (q--) {
        cin >> l >> r;
        cout << preSum[r] - preSum[l-1] << endl;
    }

    return 0;
}