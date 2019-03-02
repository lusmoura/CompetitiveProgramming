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
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	if(n < 26){
		cout << "NO" << endl;
		return 0;
	}

	for(int i = 0; i < n; i++){
		s[i] = tolower(s[i]);
		sc.insert(s[i]);
	}

	if(sc.size() == 26) cout << "YES" << endl;
	else cout << "NO" << endl;


	return 0;
}