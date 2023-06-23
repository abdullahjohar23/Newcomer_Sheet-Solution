// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: I. Smallest Pair

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
        int n, sum;
        cin >> n;
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        int ans = INT_MAX;
 
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                sum = (arr[i] + arr[j] + j - i);
                ans = min(ans, sum);
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}