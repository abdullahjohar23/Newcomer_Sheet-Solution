// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: J. Primes from 1 to N

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

    int n, i, j;
    cin >> n;
 
    for (i = 1; i <= n; i++) {
        for (j = 2; j <= i; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (i == j) {
            cout << i << ' ';
        }
    }
    
    return 0;
}