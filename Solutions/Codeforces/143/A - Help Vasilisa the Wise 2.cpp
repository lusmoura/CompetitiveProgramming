#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

//r1, r2, c1, c2, d1, d2
int v[6], ans[4];

bool allDiffer() {
	return (ans[0] != ans[1] && ans[0] != ans[2] && ans[0] != ans[3] && ans[1] != ans[2] && ans[1] != ans[3] && ans[2] != ans[3]);
}

bool allRange() {
	bool ret = true;
	for(int i = 0; i < 4; i++) {
		ret &= (ans[i] > 0 && ans[i] < 10);
	}
	return ret;
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);


	for(int i = 0; i < 6; i++) {
		cin >> v[i];
	}

	for(int i = 1; i < 10; i++) {
		ans[0] = i;
		ans[1] = v[0] - i;
		ans[2] = v[2] - i;
		ans[3] = v[1] - ans[2];

		if(allDiffer() && allRange() && ans[0] + ans[3] == v[4] && ans[1] + ans[2] == v[5] && ans[1] + ans[3] == v[3]) {
			cout << ans[0] << " " << ans[1] << endl;
			cout << ans[2] << " " << ans[3] << endl;
			return 0;
		}
	}

	cout << -1 << endl;

	return 0;
}