// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: O. Sort String

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
    
    int n, f[10010] = {0};
    char ch;
    scanf("%d ", &n);
 
    for (int i = 0; i < n; i++) {
        scanf("%c", &ch);
        f[ch]++;
    }
 
    for (int i = 'a'; i <= 'z'; i++) {
        if (f[i] > 0) {
            for (int j = 1; j <= f[i]; j++) {
                printf("%c", i);
            }
        }
    }

    return 0;
}