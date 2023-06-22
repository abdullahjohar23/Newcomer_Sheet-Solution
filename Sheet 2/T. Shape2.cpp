// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: T. Shape2

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

    int a;
    cin >> a;
 
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a-i; j++) {
            cout << ' ';
        }

        int k = 0;
        while (k != (2 * i - 1)) {
            cout << '*';
            k++;
        }
        cout << endl;
    }
    
    return 0;
}