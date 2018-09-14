/*BFS
	O(V+E)
*/

#include<bits/stdc++.h>

#define MAX 100005

using namespace std;

vector<int> edges[MAX];
queue <int> q;
int dist[MAX];


void bfs(int s){
	memset(dist, -1, sizeof(dist));

	dist[s] = 0;
	q.push(s);
	
	while(!q.empty){
		int u = q.front();
		q.pop();
		
		for(int i = 0; i < edges[u].size(); i++){
			int v = edges[u][i];
			
			if(dist[v] == -1){
				dist[v] = dist[u] + 1;
				q.push(v);
			}
		}
	}
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	return 0;
}