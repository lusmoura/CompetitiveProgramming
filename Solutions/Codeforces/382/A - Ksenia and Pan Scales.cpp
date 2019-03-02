#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	string s, t;
	cin >> s >> t;

	int pos = s.find('|');
	string left = s.substr(0, pos);
	string right = s.substr(pos+1);

	for(int i = 0; i < t.size(); i++) {
		(left.size() > right.size()) ? right += t[i] : left += t[i];
	}

	if(left.size() != right.size()) cout << "Impossible" << endl;
	else cout << left << '|' << right << endl;

	return 0;
}