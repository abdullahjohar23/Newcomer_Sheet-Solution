// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: Q. Count Subarrays

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
        int n; cin >> n;
        int f, ans = n, arr[n];
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        for (int i = 1; i <= n*n+1/2 - n; i++) {
            for (int j = 0; j < n-i; j++) {
                for (int k = j; k < j+i; k++) {
                    if (arr[k] < arr[k+1]) {
                        f = 1;
                    } else {
                        f = 0;
                        break;
                    }
                } 
                if (f == 1) {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}