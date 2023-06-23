// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: C. Replacement

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
        
        if (a > 0) {
            cout << "1 ";
        } else if (a < 0) {
            cout << "2 ";
        } else if (a == 0) {
            cout << "0 ";
        }
    }
    
    return 0;
}