#include <bits/stdc++.h>

using namespace std;

#define MAX = 100002;
#define ii pair<int,int> 
#define fi first
#define se second
#define left(x) x << 1
#define right(x) x << 1 | 1

int seg[4 * MAX];
ii v[MAX];
int n, a, b;

void update(int r, int x, int i, int j){
	if(i > b || j < a) return;
	if(a <= i && j <= b)
		seg[r] = x;
	else{
		int mid = (i+j)/2;
		update(left(r), x, i, mid);
		update(right(r), x, mid+1, j);
		seg[r] = max(seg[left(r)], seg[right(r)]);
	}
}

int query(int r, int i, int j){
	if(i > b || j < a) return 0;
	if(a <= i && j <= b){
		return seg[r];
	}
	else{
		int mid = (i+j)/2;
		int L = query(left(r), i, mid);
		int R = query(right(r), mid+1, j);
		return max(L, R);
	}
}

bool cmp(ii a, ii b){
	if(a.fi == b.fi){
		//longest non decreasing: return a.se < b.se
		return a.se > b.se; 
	}
	return a.fi < b.fi;
}

int main(void){
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		scanf("%d", &v[i].fi);
		v[i].se = i;
	}

	sort(v+1, v+n+1, cmp);

	for(int i = 1; i <= n; i++){
		a = 1, b = v[i].se-1;
		int q = query(1, 1, n);

		a = b = v[i].se;
		update(1, q+1, 1, n);
	}

	// for(int i = 1; i <= n; i++){
	// 	a = b = i;
	// 	printf("%d ", query(1, 1, n));
	// }
	// printf("\n");

	a = 1, b = n;
	int ans = query(1, 1, n);
	printf("%d\n", ans);

	return 0;
}