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

	int v[MAX];
	int n, s = 0, d = 0;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> v[i];
	}

	int j = 0, i = n-1, turn = 1;
	while(j <= i){
		if(turn){
			if(v[i] > v[j]){
				s += v[i];
				i--;
			} else {
				s += v[j];
				j++;
			}

		} else {
			if(v[i] > v[j]){
				d += v[i];
				i--;
			} else {
				d += v[j];
				j++;
			}
		}
		
		turn = !turn;
	}

	cout << s << " " << d << endl;

	return 0;
}