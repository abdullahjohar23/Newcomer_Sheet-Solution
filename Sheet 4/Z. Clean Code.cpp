// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: Z. Clean Code

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

    string s;
	int cnt = 1;
    bool f;
 
	while (getline(cin, s)) {
		f = 0;
		
        if (s.size() == 0 or s == " ") {
			continue;
		}
 
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '/' and s[i+1] == '/' and cnt) {
				break;
			} else if (s[i] == '/' and s[i+1] == '*') {
				i++;
				cnt = 0;
			} else if (s[i] == '*' and s[i+1] == '/' and !cnt) {
				i++;
				cnt = 1;
			} else if (cnt == 1) {
				cout << s[i];
				f = 1;
			}
		}
		if (f and cnt == 1) {
			cout << endl;
		}
	}

    return 0;
}