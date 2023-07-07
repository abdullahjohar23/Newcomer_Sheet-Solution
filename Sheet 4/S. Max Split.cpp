// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: S. Max Split

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
    
    int row = 0, col = 0, r = 0, l = 0, cnt = 0;
    char arr[1000][1000];
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'R') {
			arr[row][col] = s[i];
			r++;
		} else {
			arr[row][col] = s[i];
			l++;
		}
		col++;
 
		if (r == l and r > 0) {
			row++;
			col = 0;
			cnt++;
			r = 0;
			l = 0;
		}
	}
    
	cout << cnt << endl;
 
	for (int i = 0; i < 1000; i++) {
		if (arr[i][0] == 'R' or arr[i][0] == 'L'){
			cout << arr[i] << endl;
        }
	}

    return 0;
}