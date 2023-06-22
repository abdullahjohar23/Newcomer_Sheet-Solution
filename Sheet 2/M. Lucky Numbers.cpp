// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: M. Lucky Numbers

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

    // %10 gives the last digit
    // /10 gives the digits removing the first numbers
 
    int a, b, d, f, i, j, cnt = 0;
    cin >> a >> b; // a = 4, b = 20
 
    i = a; // i = 4
    while (i <= b) { // 4 <= 20
        j = i; // j = 4
        f = 1;
        while (j > 0) {
            d = j % 10; // 4 % 10 = 4 ; which means d = 4
 
            if (d != 4 and d != 7) { // numbers without 4 & 7
                f=0;
            }
            j /= 10; // j = 4 / 10
        }
 
        if (f == 1) {
            cout << i << ' ';
            cnt++; // counter is positive means we got some 4-7 related numbers ^-^
        }
        i++;
    }

    if (cnt == 0) { // counter is 0 means we got no 4-7 related numbers :(
        cout << -1 << endl;
    }
    
    return 0;
}