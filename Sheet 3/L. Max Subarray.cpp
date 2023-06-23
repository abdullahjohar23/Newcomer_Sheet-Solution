// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: L. Max Subarray

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

    int t, n, mx;
    cin >> t;
 
    while(t--) {
        cin >> n;
        int arr[n];
 
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            cout << arr[i] << ' ';
        }
 
        for (int i = 1; i <= (n*n+1)/2 - n; i++) {
            for (int j = 0; j < n-i; j++) {
                mx = INT_MIN;
                for (int k = j; k <= j+i; k++) {
                    mx = max(mx, arr[k]);
                }
                cout << mx << ' ';
            }
        }
        cout << endl;
    }
    
    return 0;
}