// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: G. Palindrome Array

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

    int n, cnt = 0;
    cin >> n;
    int arr[n];
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    for (int i = 0; i < n/2; i++) {
        if (arr[i] == arr[n-i-1]) {
            cnt++;
        }
    }

    if (cnt == n/2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}