// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: Z. Binary Search

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
    
    bool found;
    long long n, q;
    cin >> n >> q;

    long long arr[n];
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    sort (arr, arr + n);

    long long x, l, r, m;
    while (q--) {
        cin >> x;
        found = false;
        l = 0, r = n - 1;
 
        while (l <= r) {
            m = (l + r) / 2;
 
            if (x == arr[m]) {
                found = true;
                break;
            } else if (x < arr[m]) {
                r = m - 1;
            } else if (x > arr[m]) {
                l = m + 1;
            }
        }
 
        if (found == true) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }

    return 0;
}