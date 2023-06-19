// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: V. Comparison

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

    char s;
    int a, b;
    cin >> a >> s >> b;
 
    if ( (a > b and s == '>') or (a < b and s == '<') or (a == b and s == '=') ) {
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }
    
    return 0;
}