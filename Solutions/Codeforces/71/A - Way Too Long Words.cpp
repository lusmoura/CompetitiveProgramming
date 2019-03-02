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
	string s;
	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> s;
		int size = s.size();
		if(size > 10) cout << s[0] << size - 2 << s[size-1] << endl;
		else cout << s << endl;
	}

	return 0;
}