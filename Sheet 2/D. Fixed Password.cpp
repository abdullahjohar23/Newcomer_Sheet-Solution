// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 2: D. Fixed Password

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

    int pass;

    while (true) {
        cin >> pass;

        if (pass == 1999){
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }
    
    return 0;
}