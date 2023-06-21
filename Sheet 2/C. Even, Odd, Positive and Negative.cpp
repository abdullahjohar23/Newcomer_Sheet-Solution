// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: C. Even, Odd, Positive and Negative

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

    int n, i, x, ev=0, od=0, pos=0, neg=0;
    cin >> n;
 
 
    for (i = 0; i < n; i++) {
        cin >> x;

        if (x % 2 == 0) {
            ev++;
        } if (x % 2 != 0) {
            od++;
        } if (x > 0) {
            pos++;
        } if (x < 0) {
            neg++;
        }
    }
 
    cout << "Even: " << ev << endl;
    cout << "Odd: " << od << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    
    return 0;
}