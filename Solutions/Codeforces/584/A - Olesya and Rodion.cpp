#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << ' is ' << (x) << endl

typedef long long int ll;

using namespace std;

int main(int argc, const char *argv[]){

	ll n, t;
	scanf("%lld%lld", &n, &t);
	
	if(t == 10){
		if(n == 1){
			printf("-1\n");
		} else {
			printf("1");
			for(int i = 0; i < n-1; i++) printf("0");
		}
		printf("\n");
	} else {
		for(int i = 0; i < n; i++){
			printf("%lld", t);;
		}
		printf("\n");
	}

	return 0;
}