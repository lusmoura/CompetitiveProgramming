#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << 'is' << (x) << endl

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	string s;
	cin >> s;
	int i = 0, ans = 0, am = 1;
	vector <int> vec;

	for(int i = 0; i < s.size() -1; i++){
		if(s[i] == s[i+1]){
			am++;
		}
		else{
			vec.pb(am);
			am = 1;
		}
	}
	vec.pb(am);
	

	for(int i = 0; i < vec.size(); i++){
		while(vec[i] >= 1){
			vec[i] -= 5;
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}