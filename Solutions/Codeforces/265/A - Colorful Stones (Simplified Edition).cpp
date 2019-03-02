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

	int j = 0;
	for(int i = 0; i < t.size(); i++){
		 if(t[i] == s[j] && (j-1 != s.size())) j++;
	}

	cout << j+1 << endl;

	return 0;
}