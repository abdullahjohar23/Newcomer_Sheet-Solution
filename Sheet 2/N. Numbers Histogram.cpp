// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: N. Numbers Histogram

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

    char c;
    cin >> c;
 
    int n, t;
    cin >> t;
 
    for (int i = 1; i <= t; i++) {
        cin >> n;
 
        for(int j = 1; j <= n; j++) {
            cout << c;
        }
        cout << endl;
    }
    
    return 0;
}