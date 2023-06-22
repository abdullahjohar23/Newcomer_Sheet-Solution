// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: I. Palindrome

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

    int n, s, rest, reversed = 0;
    cin >> n;
 
    for (s = n; n > 0; n/=10) {
        reversed = (reversed*10) + (n%10);
    }

    cout << reversed << endl;

    if (s == reversed) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}