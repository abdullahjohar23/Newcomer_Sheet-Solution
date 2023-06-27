// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: C. Compare

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
    
    string x, y;
    cin >> x >> y;

    cout << min(x, y) << endl;

    return 0;
}