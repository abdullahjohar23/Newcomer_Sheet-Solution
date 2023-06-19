// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: F. Digits Summation

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

    long long n, m;
    cin >> n >> m;

    cout << n%10 + m%10 << endl;
    
    return 0;
}