#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int mat[MAX][2];

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> mat[i][0] >> mat[i][1];

		if(mat[i][0] != mat[i][1]){
			cout << "rated"<< endl;
			return 0;
		}
	}

	for(int i = 0; i < n-1; i++){
		if(mat[i+1][0] > mat[i][0]){
			cout << "unrated" << endl;
			return 0;
		}
	}

	cout << "maybe" << endl;

	return 0;
}