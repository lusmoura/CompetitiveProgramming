/*Prim
	1-based
	O(E * log(V))
*/

#include <bits/stdc++.h>

using namespace std;

#define MAX 100005
#define INF 0x3f3f3f3f

typedef pair<int, int> pii;   

int n, m;                      
int dist[MAX];           
int vis[MAX];          
vector<pii> edges[MAX];    

int Prim(){
	int cost = 0;
	for(int i = 2;i <= n;i++) dist[i] = INF;
	
	dist[1] = 0;                                  
	priority_queue <pii, vector<pii>, greater<pii>> pq; 
	
	pq.push(pii(dist[1], 1)); 
	
	while(true){ 
		int next = -1;

		while(!pq.empty()){
			int cur = pq.top().second;
			pq.pop();
			
			if(!vis[cur]){ 
				next = cur;
				break;
			}
		}
		
		if(next == -1) break; 
		
		vis[next] = true; 

		for(int i = 0;i < edges[next].size();i++){

			int u  = edges[next][i].first;
			int cur = edges[next][i].second;

			if(dist[cur] > u && !vis[cur]){  
				dist[cur] = u;                         
				pq.push(pii(dist[cur], cur));
			}
		}
	}
	
	
	for(int i = 1; i <= n; i++) 
		cost += dist[i];
	
	return cost;
}

int main(){
	int x, y, dist;
	
	cin >> n >> m;
	
	for(int i = 1;i <= m;i++){
		cin >> x >> y >> dist;
		
		edges[x].push_back(pii(dist, y));
		edges[y].push_back(pii(dist, x));
	}
	
	cout << Prim() << endl; 
	
	return 0;
}