//multiple of p greater than ceil(n/s)*k

#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	float k, n, p, s;
	int ans = 0;
	
	cin >> k >> n >> s >> p;

	ans = ceil((ceil(n/s) * k)/p);
	
	cout << ans << endl;


	return 0;
}