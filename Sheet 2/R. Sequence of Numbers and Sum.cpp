// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: R. Sequence of Numbers and Sum

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

    while (true) {
        int a, b, sum = 0;
        cin >> a >> b;

        if (a <= 0 or b <= 0) {
            break;
        }

        if (a > b) {
            swap(a, b);
        }

        for (int i = a; i <= b; i++) {
            cout << i << ' ';
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
    
    return 0;
}