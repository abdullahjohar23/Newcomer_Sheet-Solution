// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: E. Lowest Number

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

    int n, pos, mn;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mn = *min_element(arr, arr+n);
 
    for (int i = 0; i < n; i++) {
        if (arr[i] == mn) {
            pos = i + 1;
            break;
        }
    }
    cout << mn << ' ' << pos << endl;
    
    return 0;
}