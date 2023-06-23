// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: B. Searching

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

    int n, x, cnt = 0;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cin >> x;
    
    for (int i = 0; i < n; i++) {
        if (x == arr[i]) {
            cout << i << endl;
            cnt++;
            break;
        }
    }
    
    if (cnt == 0) {
        cout << -1 << endl;
    }
    
    return 0;
}