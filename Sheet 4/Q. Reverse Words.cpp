// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: Q. Reverse Words

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
    
    int space, n, toEnd = 0;
    char s[1000010];
    gets(s);
    n = strlen(s);

    for (int i = 0; i < n+1; i++) {
        if (s[i] == ' ' or s[i] == '\0') {
            space = i;
            for (int j = space-1; j >= toEnd; j--) {
                cout << s[j];
            }
 
            // to print a space after every reversed word
            if (i != n) {
                cout << ' ';
            }
 
            toEnd = space + 1; // since toEnd is the next letter after a space
        }
    }

    return 0;
}