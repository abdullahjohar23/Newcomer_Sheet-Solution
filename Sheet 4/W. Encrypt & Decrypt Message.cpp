// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: W. Encrypt & Decrypt Message

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

    int q;
    string s1="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/"; // key
    string s2="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; // original
    string s;
    cin >> q >> s;

    for (int i = 0; i < s.size(); i++) {
        if (q == 1) {
            for (int j = 0; j < s1.size(); j++) {
                if (s[i] == s2[j])
                    cout << s1[j];
            }
        }
        else {
            for (int j = 0; j < s1.size(); j++) {
                if (s[i] == s1[j])
                    cout << s2[j];
            }
        }
    }

    return 0;
}