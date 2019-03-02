#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int am[4];
int main(int argc, const char *argv[]){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	string s;
	cin >> s;

	for(int i = 0; i < s.size(); i++){
		if(s[i] == '1') am[1]++;
		else if(s[i] == '2') am[2]++;
		else if(s[i] == '3') am[3]++;
		else am[0]++;
	}

	for(int i = 1; i < 4; i++){
		while(am[i]) {
			cout << i;
			am[i]--;
			if(am[0]){
				cout << "+";
				am[0]--;
			}
		}
	}

	return 0;
}