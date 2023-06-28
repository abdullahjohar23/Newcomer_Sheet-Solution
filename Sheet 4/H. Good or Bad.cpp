// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: H. Good or Bad

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
    
    int t;
    cin >> t;

    while (t--) {
        bool f = false;
        string s, c;
        cin >> s;

        for (int i = 0; i < s.size()-2; i++) {
            c = s[i];
            c+= s[i+1]; 
            c+= s[i+2];
            
            if (c == "101" or c == "010") {
                f = true;
                break;
            }
        }

        (f == true) ? cout << "Good" << endl : cout << "Bad" << endl;
    }

    return 0;
}