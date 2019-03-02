#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f

using namespace std;

bool cube(long long int n) {
    long long int root(round(cbrt(n)));
    return n == root * root * root;
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	long long int n, s, p;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> s >> p;
		
		long long int aux = s * p;
			
		aux = cbrt(aux);

		if(cube(s*p) && !(s%aux) && !(p%aux)) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}