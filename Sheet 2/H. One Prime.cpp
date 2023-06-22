// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: H. One Prime

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

    int n, i, count = 0;
    cin >> n;
 
    for (i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            count++;
            break;
        }
    }

    if (count == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}