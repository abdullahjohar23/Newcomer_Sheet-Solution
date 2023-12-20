// Codeforces Handle: Abdullah_Johar
// Newcomer Sheet 4: U. New Words

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
	cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
 
	int e = 0, g = 0, y = 0, p = 0, t = 0;
 
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == 'e') e++;
		else if(s[i] == 'g') g++;
		else if(s[i] == 'y') y++;
		else if(s[i] == 'p') p++;
		else if(s[i] == 't') t++;
	}
 
    cout << min (min (min (e, g), min (y, p)), t) << endl;

    return 0;
}