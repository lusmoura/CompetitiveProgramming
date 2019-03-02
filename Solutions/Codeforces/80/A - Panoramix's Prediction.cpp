#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 1005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

int isPrime[MAX];

void crivo() {
	
	isPrime[2] = 1;
	for(int i = 2; i < MAX; i++) {
		if(isPrime[i]) {
			for(int j = i*i; j < MAX; j += i) isPrime[j] = 0;
		}
	}
}

string solve(int n, int m) {
	memset(isPrime, 1, sizeof(isPrime));
	crivo();

	if(!isPrime[m]) return "NO";
	
	for(int i = n+1; i < m; i++) {
		if(isPrime[i]) return "NO";
	}

	return "YES";
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;

	cout << solve(n, m) << endl;

	return 0;
}