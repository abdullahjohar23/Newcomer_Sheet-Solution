// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: K. Divisors

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

    int n, i;
    cin >> n;
 
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
    
    return 0;
}