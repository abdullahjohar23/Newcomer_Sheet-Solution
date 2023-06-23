// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: D. Positions in Array

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

    int n, a;
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a < 11) {
            cout << "A[" << i << "] = " << a << endl;
        }
    }
    
    return 0;
}