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
	int k, r;

	cin >> k >> r;

	if(k%10 == 0 || k%10 == r) {
		cout << "1" << endl;
		return 0;
	}

	for(int i = 2; i <= 10; i++){
		if((k*i) % 10 == 0 || (k*i) % 10 == r) {
			cout << i << endl;
			return 0;
		}	
	}

	return 0;
}