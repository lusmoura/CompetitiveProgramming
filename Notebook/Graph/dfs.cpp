/*DFS
	O(V+E)	
*/

#include<bits/stdc++.h>

#define MAX 100005

using namespace std;

int vis[MAX];
vector<int> egdes[MAX];

void dfs(int s){
	vis[s] = 1;
	
	for(int i = 0; i < egdes[u].size(); i++){
		int v = egdes[u][i];
		if(!vis[v]) 
			dfs(v);
	}
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);



	return 0;
}