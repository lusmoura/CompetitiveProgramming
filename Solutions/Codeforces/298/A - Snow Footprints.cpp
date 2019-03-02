#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

int l, r;
int n, leftl, leftr, rigthl, rigthr;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin >> n;
	string s;
	cin >> s;

	for(int i = 0; i < n; i++) {
		if(s[i] == 'R') rigthr = i+1;
		if(s[i] == 'L') leftr = i+1;
	}

	for(int i = n-1; i >= 0; i--) {
		if(s[i] == 'R') rigthl = i+1;
		if(s[i] == 'L') leftl = i+1;
	}

	if(!leftl && !leftr) cout << rigthl << " " << rigthr+1 << endl;
	else if(!rigthr && !rigthl) cout << leftr << " " << leftl-1 << endl;
	else cout << leftl << " " << rigthr << endl;
	

	return 0;
}