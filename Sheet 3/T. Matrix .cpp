// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: T. Matrix 

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

    int n, sum1 = 0, sum2 = 0, ans;
    cin >> n;

    int arr[n][n];
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sum1 += arr[i][i];
        sum2 += arr[i][n-i-1];
    }

    ans = sum1 - sum2;
    
    cout << abs(ans) << endl;
    
    return 0;
}