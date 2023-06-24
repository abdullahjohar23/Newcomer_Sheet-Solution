// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: O. Fibonacci

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

    int n;
    long long arr[51];
    cin >> n;

    arr[1] = 0;
    arr[2] = 1;
    
    for (int i = 3; i < 51; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
 
    cout << arr[n] << endl;
    
    return 0;
}