// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: U. Is B a subsequence of A?

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

    int n, m, cnt;
    cin >> n >> m;

    int arr[n], brr[m];
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    for (int i = 0; i < m; i++) {
        cin >> brr[i];
    }
 
    for (int i = 0, j = 0; i < n and j < m; ) {
        while (arr[i] != brr[j] and i < n) {
            i++;
        }
        i++, j++;
        cnt = j;
    }

    if (cnt == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}