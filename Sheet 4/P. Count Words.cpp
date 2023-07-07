// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: P. Count Words

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
    
    char s[1000010];
    int i, j, ans = 1;
    gets(s);
 
    if (s[0] == ' ' or s[0] == '!' or s[0] == '.' or s[0] == ',' or s[0] == '?') {
        ans = 0;
    }

    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == ' ' or s[i] == '!' or s[i] == '.' or s[i] == ',' or s[i] == '?') {
            if (s[i+1] >= 'A') { // because there is a space (or any other symbol) before a word, except for that first word, this is why we used count = 1
                ans++;
            }
        }
    }
 
    cout << ans << endl;

    return 0;
}