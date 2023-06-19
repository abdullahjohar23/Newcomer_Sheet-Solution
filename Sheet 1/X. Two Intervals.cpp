// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: X. Two Intervals

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

    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
 
    if (r1 < l2 or r2 < l1) {
        cout << -1 << endl;
    } else {
        cout << max(l1, l2) << ' ' << min(r1, r2);
    }

    /**
      case 1    L1 ______________ R1    ( L1=L1 , R1>R2 )
                L2 ________ R2
 
      case 2    L1 ________ R1          ( L1=L2 , R1<R2 )
                L2 ______________ R2
 
      case 3    L1 ______________ R1    ( L1<L2 , R1=R2 )
                L2       ________ R2
 
      case 4    L1       ________ R1    ( L1<L2 , R1=R2 )
                L2 ______________ R2
 
      case 5    L1 ______________ R1    ( L1<L2 , R1>R2 )
                L2    ________ R2
 
      case 6    L1    ________ R1        ( L1>L2 , R1<R2 )
                L2 ______________ R2
 
      case 7    L1    ________ R1        ( L1>L2 , R1>R2 )
                L2 ________ R2
 
      case 8    L1 ________ R1           ( L1<L2 , R1<R2 )
                L2    ________ R2
 
      case 9    L1 ______________ R1      ( L1=L2 , R1=R2 )
                L2 ______________ R2
 
      case 10   L1 ________ R1            ( L2=R1 )
                        L2 ________ R2
 
      case 11    L1 ________ R1             ( R1<L2 )
                             L2 ________ R2
 
      case 12    L1 . R1                    ( L1=R1=L2=R2 )
                 L2 . R2
 
    **/

    return 0;
}