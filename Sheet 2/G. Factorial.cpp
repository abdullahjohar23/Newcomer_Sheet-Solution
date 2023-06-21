// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: G. Factorial

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

    long long t, a, fact;
    cin >> t;
 
    while (t--) {
        cin >> a;
        fact = 1;

        for (int i = 1; i <= a; i++) {
            fact *= i;
        }
        cout << fact << endl;;
    }
    
    return 0;
}