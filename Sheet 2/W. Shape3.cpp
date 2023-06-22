// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: W. Shape3

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

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n-i; s++) {
            cout << ' ';
        }
        for (int j = 1; j <= 2*i-1; j++) {
            cout << '*';
        }
        cout << endl;
    }
    
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= i-1; s++) {
            cout << ' ';
        }
        for (int j = 1; j <= (2*n-(2*i-1)); j++) {
            cout << '*';
        }
        cout << endl;
    }
    
    return 0;
}