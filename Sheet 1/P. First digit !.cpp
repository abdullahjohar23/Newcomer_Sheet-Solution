// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: P. First digit !

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
    n /= 1000;
 
    if (n % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }
    
    return 0;
}