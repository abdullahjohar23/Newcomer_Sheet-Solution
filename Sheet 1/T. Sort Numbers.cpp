// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: T. Sort Numbers

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

    int a, b, c;
    cin >> a >> b >> c;
    
    if (a >= b and a >= c) {
        if (b >= c) {
            cout << c << endl << b << endl << a << endl;
            cout << endl;
            cout << a << endl << b << endl << c << endl;
        } else {
            cout << b << endl << c << endl << a << endl;
            cout << endl;
            cout << a << endl << b << endl << c << endl;
        }
    }
    
    else if (b >= c and b >= a) {
        if (c >= a) {
            cout << a << endl << c << endl << b << endl;
            cout << endl;
            cout << a << endl << b << endl << c << endl;
        } else {
            cout << c << endl << a << endl << b << endl;
            cout << endl;
            cout << a << endl << b << endl << c << endl;
        }
    }
    
    else if (c >= b and c >= a) {
        if (b >= a) {
            cout << a << endl << b << endl << c << endl;
            cout << endl;
            cout << a << endl << b << endl << c << endl;
        } else {
            cout << b << endl << a << endl << c << endl;
            cout << endl;
            cout << a << endl << b << endl << c << endl;
        }
    }
    
    else if (a == b and b == c and a == c) {
        cout << a << endl << b << endl << c << endl;
        cout << endl;
        cout << a << endl << b << endl << c << endl;
    }
    
    return 0;
}