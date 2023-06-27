// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: D. Strings

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
    
    string a, b;
    cin >> a >> b;
 
    cout << a.size() << ' ' << b.size() << endl;
    cout << a << b << endl;
    swap (a[0], b[0]);
    cout << a << ' ' << b << endl;

    return 0;
}