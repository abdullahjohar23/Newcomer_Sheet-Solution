// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: F. Reversing

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

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n-1; i >= 0; i--) {
        cout << arr[i] << ' ';
    }
    
    return 0;
}