// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: O. Calculator

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

    int a, b, result;
    char sign;
    
    cin >> a >> sign >> b;
    
    if (sign == '+') {
        cout << a + b << endl;
    } else if (sign == '-') {
        cout << a - b << endl;
    } else if (sign == '*') {
        cout << a * b << endl;
    } else if (sign == '/') {
        cout << a / b << endl;
    }
    
    return 0;
}