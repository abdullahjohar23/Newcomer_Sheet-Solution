// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: Y. Min Cost String

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
    bool flag = false;
    long long r, l, n, val[26], mx, mn, cost = 0;
    char ch;
    cin >> s;
    n = s.size();
    
    for (int i = 0; i < 26; i++) {
        cin >> val[i];
    }

    for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
            if (flag == true) {
                r = i;
            }
            else {
                l = i;
                r = i;
                flag = true;
            }
        }
        else if (flag == true) {
            if (l == 0) {
                for (int j = 0; j < 26; j++) {
                    if (val[j] == val[s[i] - 'a']) {
                        ch = j + 'a';
                        break;
                    }
                }
            }
            else {
                mx = max (val[s[l-1]-'a'], val[s[i]-'a']);
                mn = min (val[s[l-1]-'a'], val[s[i]-'a']);
                
                for (int j = 0; j < 26; j++) {
                    if (val[j] >= mn and val[j] <= mx) {
                        ch = j + 'a';
                        break;
                    }
                }
            }

            for (int j = l; j <= r; j++) {
                s[j] = ch;
            }
            flag = false;
        }
    }
    
    if (flag == true) {
        if (l == 0) {
            for(int i=0; i < n; i++) {
                s[i] = 'a';
            }
        }
        else {
            for (int j = 0; j < 26; j++) {
                if (val[j] == val[s[l-1]-'a']) {
                    ch = j + 'a';
                    break;
                }
            }
            for (int j = l; j <= r; j++) {
                s[j]=ch;
            }
        }
    }
    for (int i = 0; i < n-1; i++) {
        cost += abs(val[s[i]-'a']-val[s[i+1]-'a']);
    }
    
    cout << cost << endl << s;

    return 0;
}