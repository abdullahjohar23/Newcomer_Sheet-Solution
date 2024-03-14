// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 5: B. Print

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

void print (int x) {
    for (int i = 1; i <= x; i++) {
        if (i == x) {
            cout << i;
        } else {
            cout << i << ' ';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a;
    cin >> a;
    print(a);

    return 0;
}