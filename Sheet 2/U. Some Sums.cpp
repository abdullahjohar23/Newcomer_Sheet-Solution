// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: U. Some Sums

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

    int n, a, b, x, r, z, sum = 0;
    cin >> n >> a >> b;
    
    for (int i = 1; i <= n; i++) {
        z = 0;
        x = i;
 
        while (x > 0) {
          r = x % 10;
          z += r;
          x /= 10;
        }
 
        if (a <= z and z <= b) {
          sum += i;
        }
    }

    cout << sum << endl;
    
    return 0;
}