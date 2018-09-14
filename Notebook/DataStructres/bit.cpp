/*Binary Indexed Tree - Fenwick Tree
	1-based
	operations in O(log(N))
*/

#include<bits/stdc++.h>

#define MAX 100005
#define INF 0x3f3f3f3f

using namespace std;

int bit[MAX];
int n;

//used to build
void update(int id, int val){
	while(id < n){ 
		bit[id] += val;
		id += id & (-id);
	}
}

int query(int id){
	int sum = 0;
	while(id > 0){
		sum += bit[id];
		id -= id & (-id);
	}
	return sum;
}

int query(int a, int b){
	return query(b) - query(a-1);
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	return 0;
}