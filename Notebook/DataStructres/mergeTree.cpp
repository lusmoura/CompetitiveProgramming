/*Merge sort tree
	smaller or equal elements in a range
	1-based
*/

#include<bits/stdc++.h>

#define MAX 100005
#define left(x) x << 1
#define right(x) x << 1 | 1

using namespace std;

vector<int> seg[4*MAX];
int v[MAX];
int n;

//O(N*log(N))
void build(int node, int start, int end){
	if(start == end) 
		seg[node].push_back(v[start]);
	
	else{
		int mid = (start+end)/2;
		build(left(node), start, mid);
		build(right(node), mid+1, end);

		seg[node].resize(end-start+1);

		merge(seg[left(node)].begin(), seg[left(node)].end(), seg[right(node)].begin(), seg[right(node)].end(), seg[node].begin());
	}
}

//O(log²(N)) per query
int query(int node, int start, int end, int a, int b, int val){
	if(start > b || end < a) return 0;

	//binary serach to find the elements smaller than val
	if(start >= a && end <= b)
		return upper_bound(seg[node].begin(), seg[node].end(), val) - seg[node].begin();
	
	int mid = (start+end)/2;
	int L = query(left(node), start, mid, a, b, val);
	int R = query(right(node), mid+1, end, a, b, val);
	return L + R;
}

int query(int a, int b, int val){
	query(1, 1, n, a, b, val);
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	return 0;
}