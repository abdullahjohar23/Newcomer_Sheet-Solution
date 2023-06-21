// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: B. Even Numbers

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

    int n;
    cin >> n;

    if (n == 1) {
        cout << -1 << endl;
    } else {
        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                cout << i << endl;
            }
        }
    }
    
    return 0;
}