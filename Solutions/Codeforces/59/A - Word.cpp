#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

typedef long long ll;

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int lower = 0, upper = 0;
	string s;
	cin >> s;

	for(int i = 0; i < s.size(); i++){
		s[i] >= 'a' ? lower++ : upper++;
	}

	if(upper > lower){
		for(int i = 0; i < s.size(); i++){
			s[i] = toupper(s[i]);
		}
	} else {
		for(int i = 0; i < s.size(); i++){
			s[i] = tolower(s[i]);
		}
	}

	cout << s << endl;

	return 0;
}