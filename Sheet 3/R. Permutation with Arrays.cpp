// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: R. Permutation with Arrays

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

    bool f = true;
    int n; cin >> n;
    int arr1[n], arr2[n];
 
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    sort(arr1, arr1+n);
    sort(arr2, arr2+n);
 
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            f = false;
            break;
        }
    }
 
    (f == true) ? cout << "yes" << endl : cout << "no" << endl;
    
    return 0;
}