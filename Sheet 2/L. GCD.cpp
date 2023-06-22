// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: L. GCD

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

    int a, b, x;
    cin >> a >> b;
    cout << __gcd(a, b) << endl;

    /*
    // this process can be used without gcd funtion
    while (b % a != 0) {
        x = b % a;
        b = a;
        a = x;
    }
    
    cout << a << endl;
    */
    
    return 0;
}