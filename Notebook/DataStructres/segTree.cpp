/*Segment Tree with lazy propagation
	1-based
	operations in O(log(n))
*/

#include<bits/stdc++.h>

#define MAX 100005
#define left(x) x << 1
#define right(x) x << 1 | 1

using namespace std;

int n;
int v[MAX];
int seg[4*MAX];
int lazy[4*MAX];


//lazy propagation
void prop(int node, int start, int end){
	seg[node] += lazy[node] * (start - end + 1);
	
	if(start != end){
		lazy[right(node)] += lazy[node];
		lazy[left(node)] += lazy[node];
	}
	
	lazy[node] = 0;
}

// merging node's children
int merge(int a, int b){
	return a + b;
}

//update + query
int update(int node, int start, int end, int a, int b, int val){
	if(lazy[node]) prop(node, start, end);

	if(end < a || start > b) return 0;

	if(start >= a && end <= b) {
		lazy[node] += val;
		prop(node, start, end);
		return seg[node];
	}
	else{
		int mid = (start+end)/2;
		int L = update(left(node), start, mid, a, b, val);
		int R = update(right(node), mid+1, end, a, b, val);
		seg[node] = merge(seg[left(node)], seg[right(node)]);
		return merge(L, R);
	}
}

// build seg out of v
void build(int node, int start, int end){
	if(start == end)
		seg[node] = v[start];
	
	else{
		int mid = (start+end)/2;
		build(left(node), start, mid);
		build(right(node), mid+1, end);

		seg[node] += seg[left(node)] + seg[right(node)]; 
	}
}

void update(int a, int b, int val){
	update(1, 1, n, a, b, val);
}

int query(int a, int b){
	update(1, 1, n, a, b, 0);
}

int main(int argc, const char *argv[]){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	return 0;
}