#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;
set <char> sc;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	string s;
	getline(cin, s);

	for(int i = 1; i < s.size(); i++){
		if(s[i] >= 'a' && s[i] <= 'z') sc.insert(s[i]);
	}

	cout << sc.size() << endl;

	return 0;
}