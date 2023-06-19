// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: L. The Brothers

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

    string a, s1, b, s2;
    cin >> a >> s1 >> b >> s2;

    if (s1 == s2) {
        cout << "ARE Brothers" << endl;
    } else {
        cout << "NOT" << endl;
    }
    
    return 0;
}