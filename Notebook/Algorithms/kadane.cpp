/*Kadane
 	Maximun subarry sum
 	1-based
 	O(N)
*/

#include<bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define MAX 100005
int v[MAX];
int memo[MAX];
int n;
 
int kadane(){
 	int best = -INF;
 	memo[1] = v[1];
 	
 	for(int i = 1; i <= n; i++){
 		memo[i] = max(memo[i-1] + v[i], v[i]);
 		best = max(best, memo[i]);
 	}

 	return best;
 }

 int main(int argc, const char *argv[]){
 	cin.tie(0);
 	ios_base::sync_with_stdio(0);

 	return 0;
 }