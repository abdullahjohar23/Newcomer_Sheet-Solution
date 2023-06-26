// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: V. Frequency Array

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

    int n, m;
    cin >> n >> m;

    int arr[n] = {0}, freq[m+1] = {0};
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++ ;
    }

    for (int i = 1; i <= m; i++) {
        cout << freq[i] << endl;
    }
    
    return 0;
}