// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: M. Capital or Small or Digit

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

    char a;
    cin >> a;
 
    if (a >= 'A' and a <= 'Z') {
        cout << "ALPHA" << endl << "IS CAPITAL" << endl;
    } else if (a >= 'a' and a <= 'z') {
        cout << "ALPHA" << endl << "IS SMALL" << endl;
    } else {
        cout << "IS DIGIT" << endl;
    }
    
    return 0;
}