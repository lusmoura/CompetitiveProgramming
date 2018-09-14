/*Crivo
	O(N*log(N)*log(N))
*/

#include <bits/stdc++.h>

using namespace std;

#define MAX 100005
int notPrime[MAX];
int n;

void crivo(){
	for(int m = 2; m*m <= n; m++){
		if(!notPrime[m]){
			for(int i = m*m; i < n; i += m){
				notPrime[i] = 1;	//not prime
			}
		}
	}
}

int main(int argc, char const *argv[]){
	cin.tie(0);
	ios_base::sy_with_stdio(0);

	return 0;
}