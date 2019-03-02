#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

char mat[4][4];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			cin >> mat[i][j];
		}
	}

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			if(mat[i][j] == mat[i][j+1] && mat[i][j] == mat[i+1][j]) {
				cout << "YES" << endl;
				return 0;
			}
			if(mat[i][j] == mat[i][j+1] && mat[i][j] == mat[i+1][j+1]) {
				cout << "YES" << endl;
				return 0;
			}
			if(mat[i][j] == mat[i+1][j] && mat[i][j] == mat[i+1][j+1]) {
				cout << "YES" << endl;
				return 0;
			}
			if(mat[i][j+1] == mat[i+1][j] && mat[i][j+1] == mat[i+1][j+1]) {
				cout << "YES" << endl;
				return 0;
			}

		}
	}

	cout << "NO" << endl;
	return 0;
}