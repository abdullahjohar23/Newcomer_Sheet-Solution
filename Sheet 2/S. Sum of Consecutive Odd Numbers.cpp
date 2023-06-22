// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: S. Sum of Consecutive Odd Numbers

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

    int t, n, i;
    cin >> t;
 
    while (t--) {
        int a, b, sum = 0;
        cin >> a >> b;
 
        if (a > b) {
            swap(a, b);
        }

        for (int i = a+1; i < b; i++) {
            if (i % 2 == 1) {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    
    return 0;
}