#include <bits/stdc++.h>
using namespace std;

vector<int> z_val;

void z(string pattern, string text) {
	string s = pattern + "#" + text;
	z_val.resize(s.size());

	int l = 0, r = 0;
	int n = s.size();

	z_val[0] = n;
	for (int i = 1; i < n; i++) {
		if (i > r) l = r = i;
		
		z_val[i] = min(z_val[i - l], r - i);

		while (i + z_val[i] < n && s[z_val[i]] == s[i + z_val[i]]) {
			z_val[i]++;
			l = i;
			r = i + z_val[i];
		}
	}
}

int main() {
	string t, s; cin >> t >> s;
	z(t, s);

	for (int i = 0; i < z_val.size(); i++)
		cout << z_val[i] << ' ';

	return 0;
}