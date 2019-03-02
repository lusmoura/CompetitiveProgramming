#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

typedef long long ll;

using namespace std;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;
	string color = "ROYGBIV";
	string color2 = "GBIVGBI";
	cin >> n;

	while(n >= 7){
		n -= 7;
		cout << color;
	}

	for(int i = 0; i < n; i++){
		cout << color2[i];
	}

	cout << endl;

	return 0;
}