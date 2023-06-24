// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 3: P. Minimize Number

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
    int n, ans = 0;
    cin >> n ;
    
    int arr[n];
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }
 
    while (f == true) {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 1) {
                f = false;
                break;
            } else {
                arr[i] /= 2;
            }
        }
        ans++ ;
    }
 
    cout << --ans << endl;
    
    return 0;
}