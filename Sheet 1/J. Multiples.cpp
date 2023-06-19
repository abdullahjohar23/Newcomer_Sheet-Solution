// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: J. Multiples

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

    int a, b;
    cin >> a >> b;

    if (a % b == 0 or b % a == 0) {
        cout << "Multiples" << endl;
    } else {
        cout << "No Multiples" << endl;
    }
    
    return 0;
}