#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 199
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int v[MAX];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	string s;

	for(int i = 0; i < 3; i++) {
		cin >> s;
		if(s[1] == '>') v[int(s[0])]++;
		else v[int(s[2])]++;
	}

	if(v['A'] && v['B'] && v['C']) return cout << "Impossible" << endl, 0;

	for(int i = 0; i < 3; i++) {
		for(int j = 'A'; j < 'D'; j++) {
			if(v[j] == i) cout << char(j);
		}
	}
	cout << endl;

	return 0;
}
