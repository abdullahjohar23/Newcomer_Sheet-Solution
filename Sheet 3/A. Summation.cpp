// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: A. Summation

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

    long long n, a, sum = 0;
    cin >> n;

    while (n--) {
        cin >> a;
        sum += a;
    }

    cout << llabs(sum) << endl;
    
    return 0;
}