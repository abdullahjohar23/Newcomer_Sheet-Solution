// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: U. Float or Int

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

    double n;
    cin >> n;

    if (n - (int)n == 0) {
        cout << "int " << (int)n << endl;
    } else {
        cout << "float " << (int)n << ' ' << n - (int)n << endl;
    }
    
    return 0;
}