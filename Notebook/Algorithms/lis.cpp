/*LIS 
	Longest non increasing subsequence
	1-based
	O(N * log(N))
*/

#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define MAX 100005
int v[MAX];
int l[MAX];
int n;

int lis(){
	int pos;
	int ans = 0;

	memset(l, 0x3f, sizeof(l));

	l[0] = -INF;

	for(int i = 1; i <= n; i++){
		// find where to place the value
		pos = lower_bound(l, l + n + 1, v[i]) - l;

		// update lis
		l[pos] = min(l[pos], v[i]);

		ans = max(ans, pos);
	}

	return ans;
}

int main(int argc, char const *argv[]){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	return 0;
}