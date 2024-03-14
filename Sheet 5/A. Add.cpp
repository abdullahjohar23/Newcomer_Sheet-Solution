// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 5: A. Add

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

int add(int x, int y){
    int sum = x + y;
 
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;

    return 0;
}