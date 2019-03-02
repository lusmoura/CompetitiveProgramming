#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	bool isBegin = true;
	string s;
	cin >> s;

	int n = s.size();
	for(int i = 0; i < n; i++) {
		if(s[i] == '9' && isBegin) {
			isBegin = false;
			continue;
		}
		if(s[i] > '4') s[i] = '9' - s[i] + '0';
		isBegin = false;
	}
	cout << s << endl;

	return 0;
}