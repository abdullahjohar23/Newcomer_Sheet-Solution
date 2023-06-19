// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: R. Age in Days

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

    int ageDays, years, months, days;
    cin >> ageDays;
 
    years  = ageDays / 365;
    months = ageDays % 365 / 30;
    days   = ageDays % 365 % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
    
    return 0;
}