// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: W. Mirror Array

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

    int n, m, arr[100][100];
    cin >> n >> m;
 
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = m-1; j >= 0; j--) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}