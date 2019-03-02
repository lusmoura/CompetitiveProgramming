#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

using namespace std;

int clean(int a){
	int ret = 0;
	int pot = 1;
	int res;
	
	while(a){
		res = a % 10;
		a /= 10;
		if(res){
			ret += res * pot;
			pot *= 10;
		}
	}

	return ret;
}

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	int a, b, c;

	cin >> a >> b;
	c = a + b;

	a = clean(a);
	b = clean(b);
	c = clean(c);

	if(a + b == c) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}