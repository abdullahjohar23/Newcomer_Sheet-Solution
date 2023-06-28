// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: J. Count Letters

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
    cin >> s;
      
    map <char, int> mp;
       
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }

    for (auto it : mp) {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}