// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: Y. Easy Fibonacci

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

    int n, a = 0, b = 1, c;
    cin >> n;
 
    for (int i = 1; i <= n; i++) {
        cout << a << ' ';
        c = a + b;
        a = b;
        b = c;
    }
    
    return 0;
}