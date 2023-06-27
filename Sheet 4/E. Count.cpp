// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: E. Count

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
    
    int sum = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        sum += (s[i] - '0');
    }

    cout << sum << endl;

    return 0;
}