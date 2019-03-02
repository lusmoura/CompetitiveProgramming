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

	string keyboard[3] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};

	int mod = 10;
	char shift;
	cin >> shift;
	string s;
	cin >> s;

	int n  = s.size();
	for(int i = 0; i < n; i++) {
		int line = 0;
		int letter = 0;
		while(keyboard[line][letter] != s[i]){
			letter++;
			if(letter == mod){
				letter = 0;
				line++;
			}
		}

		if(shift == 'L') s[i] = keyboard[line][(letter+1)%mod];
		else s[i] = keyboard[line][(letter-1+mod)%mod];
	}

	cout << s << endl;

	return 0;
}