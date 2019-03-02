#include<bits/stdc++.h>

#define DEBUG 0
#define MAX 100005
#define INF 0x3f3f3f3f
#define mset(x,y) memset(x, y, sizeof(x))
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

vector<int> a;
vector<int> b;
int suma, sumb;

int main(int argc, const char *argv[]){

	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n;
	
	cin >> n;
	if(n < 3) {
		cout << "No" << endl;
		return 0;
	}

	for(int i = 1; i <= n; i++){
		if(i%2) {
			a.pb(i);
			suma += i;
		}
		else {
			b.pb(i);
			sumb += i;
		}
	}

	cout << "Yes" << endl;
	cout << a.size() << " ";
	for(int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;

	cout << b.size() << " ";
	for(int i = 0; i < b.size(); i++)
		cout << b[i] << " ";
	cout << endl;

	return 0;
}