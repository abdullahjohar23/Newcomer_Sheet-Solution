// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: L. String Functions

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
    int n, q;
    cin >> n >> q;
    cin >> s;
    
    while (q--) {
        int  l, r, pos;
        char ch;
        string c;

        cin >> c;

        if (c == "pop_back") {
            s.pop_back();
        }
        
        else if (c == "front") {
            cout << s.front() << endl;
        }
        
        else if (c == "back") {
            cout << s.back() << endl;
        }

        else if (c == "sort") {
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            sort (s.begin() + l - 1, s.begin() + r);
        }  
        
        else if (c == "reverse") {
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            reverse (s.begin() + l - 1,s.begin() + r);
        }

        else if (c == "print") {
            cin >> pos;
            cout << s[--pos] << endl;
        }

        else if (c == "substr") {
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            string a = s.substr(l - 1 , (r - l) + 1);
            cout << a << endl;
        }

        else if (c == "push_back") {
            cin >> ch;
            s.push_back(ch);
        }
    }

    return 0;
}