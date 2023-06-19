// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: S. Interval

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

    double n;
    cin >> n;

    if (n >= 0 and n <= 25) {
        cout << "Interval [0,25]" << endl;
    } else if (n > 25 and n <= 50) {
        cout << "Interval (25,50]" << endl;
    } else if (n > 50 and n <= 75) {
        cout << "Interval (50,75]" << endl;
    } else if (n > 75 and n <= 100) {
        cout << "Interval (75,100]" << endl;
    } else {
        cout << "Out of Intervals" << endl;
    }
    
    return 0;
}