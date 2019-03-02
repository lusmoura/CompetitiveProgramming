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

	int n;
	string s;
	cin >> n >> s;

	for(int i = n-2; i >= 0; i-=2)
		cout << s[i];
	for(int i = !(n%2); i < n; i+=2)
		cout << s[i];

	cout << endl;
	return 0;
}