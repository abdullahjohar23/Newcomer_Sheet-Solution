// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: K. Sum Digits

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

    string s;
    int n, sum = 0;
    cin >> n;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        int a = s[i] - '0';
        sum += a;
    }

    cout << sum << endl;
    
    return 0;
}