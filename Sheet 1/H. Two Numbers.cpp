// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: H. Two Numbers

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

    float a, b, div;
    cin >> a >> b;
    
    div = a / b;
 
    printf("floor %.0f / %.0f = %.0f\n", a, b, floor(div));
    printf("ceil %.0f / %.0f = %.0f\n", a, b, ceil(div));
    printf("round %.0f / %.0f = %.0f\n", a, b, round(div));
    
    return 0;
}