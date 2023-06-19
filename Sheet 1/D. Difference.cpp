// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: D. Difference
     
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
     
    long long a, b, c, d;
    cin >> a >> b >> c >> d;     
    cout << "Difference = " << (a*b) - (c*d) << endl;
    
    return 0;
}