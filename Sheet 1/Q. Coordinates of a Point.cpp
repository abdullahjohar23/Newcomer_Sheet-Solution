// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 1: Q. Coordinates of a Point

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

    double x, y;
    cin >> x >> y;
 
    if (x == 0 && y == 0) {
        cout << "Origem" << endl;
    } else if (x != 0 && y == 0) {
        cout << "Eixo X" << endl;
    } else if (x == 0 && y != 0) {
        cout << "Eixo Y" << endl;
    } else if (x > 0 && y > 0) {
        cout << "Q1" << endl;
    } else if (x < 0 && y > 0) {
        cout << "Q2" << endl;
    } else if (x < 0 && y < 0) {
        cout << "Q3" << endl;
    } else if (x > 0 && y < 0) {
        cout << "Q4" << endl;
    }
    
    return 0;
}