// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: X. Convert To Decimal 2

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

    int i, n, r, t, cnt;
    cin >> t;
 
    while (t--) {
        cin >> n;
        cnt = 0;

        while (n > 0) {
            r = n % 2;
            
            if (r == 1) {
                cnt++;
            }
            n /= 2;
        }
        cout << (int) pow(2, cnt) - 1 << endl;
    }
    
    return 0;
}