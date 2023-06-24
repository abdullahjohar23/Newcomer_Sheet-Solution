// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: S. Search In Matrix

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

    int x, r, c, f = 0;
    cin >> r >> c;

    int arr[r][c];
 
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
 
    cin >> x;
 
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (x == arr[i][j]) {
                f = 1;
                break;
            }
        }
    }

    if (f == 0) {
        cout << "will take number" << endl;
    } else {
        cout << "will not take number" << endl;
    }
    
    return 0;
}