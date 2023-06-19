// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: N. Char

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

    char ch;
    cin >> ch;
 
    if (ch >= 'A' and ch <= 'Z') {
        ch += 32;
    } else if (ch >= 'a' and ch <= 'z') {
        ch -= 32;
    }

    cout << ch << endl;
    
    return 0;
}