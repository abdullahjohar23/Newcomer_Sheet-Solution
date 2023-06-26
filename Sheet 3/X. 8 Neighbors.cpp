// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: X. 8 Neighbors

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

    bool f;
    int n, m, x, y;
    cin >> n >> m;
    
    char grid[n+1][m+1];
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> grid[i][j];
        }
    }
 
    cin >> x >> y;
 
    if (x == 1 and y == 1) {
        if (grid[1][2] == 'x' and grid[2][1] == 'x' and grid[2][2] == 'x')
            f = true;
        else
            f = false;
    } else if (x == 1 and y == m) {
        if (grid[1][m-1] == 'x' and grid[2][m] == 'x' and grid[2][m-1] == 'x')
            f = true;
        else
            f = false;
    } else if (x == n and m == 1) {
        if (grid[n-1][1] == 'x' and grid[n][2] == 'x' and grid[n-1][2] == 'x')
            f = true;
        else
            f = false;
    } else if (x == n and y == m) {
        if (grid[n-1][m] == 'x' and grid[n][m-1] == 'x' and grid[n-1][m-1] == 'x')
            f = true;
        else
            f = false;
    } else {
        if (grid[x-1][y-1] == 'x' and grid[x-1][y] == 'x' and grid[x-1][y+1] == 'x' and grid[x][y-1] == 'x' and grid[x][y+1] == 'x' and grid[x+1][y-1] == 'x' and grid[x+1][y] == 'x' and grid[x+1][y+1] == 'x')
            f = true;
        else
            f = false;
    }

    (f) ? cout << "yes" << endl : cout << "no" << endl;
    
    return 0;
}