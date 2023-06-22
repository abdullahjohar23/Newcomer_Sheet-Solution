// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: V. PUM

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
 
    for (int i = 1; i <= n*4; i++) {
        if (i % 4 == 0) {
            cout << "PUM" << endl;
        } else {
            cout << i << ' ';
        }
    }
    
    return 0;
}