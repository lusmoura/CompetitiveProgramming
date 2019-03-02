#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 1003
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << 'is' << (x) << endl

using namespace std;

int freq[MAX];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n, k;
	string s;

	cin >> n >> k;
	cin >> s;

	for(int i = 0; i < n; i++){
		int pos = s[i] - 'A';
		freq[pos]++;
	}

	int ans = freq[0];
	for(int i = 1; i < k; i++){
		ans = min(ans, freq[i]);
	}

	cout << ans * k << endl;

	return 0;
}